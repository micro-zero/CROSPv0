# Fetch Unit

The fetch unit in CROSP takes four pipeline stages to translate
virtual PC, get data stream from instruction cache, split the
instruction stream, and pre-decode. The branch predictor is
also included in this directory, generating next PC to update.

## Branch Predictor

The branch predictor is splited from fetch unit for its
complication. Different algorithm can be used. Currently the
branch predictor is implemented by basic TAGE algorithm, it is
based on the design in article
*A PPM-like, tag-based branch predictor*,
and described in the following figure.

![TAGE branch predictor](../../util/fig/tage.png)

It maintains a bimodal table and four tagged table. The method
maintaining tags are also from this article, which uses
circular shift registers. And Global history in the design is
saved in a circular queue, and passed to other module with
format of indices. If redirection are issued by execution
module, the global history will be recoverd by simply moving
rear pointer. In contrast, the CSR is recovered by passing
their values instead of pointers. The branch direction is
obtained from these five banks and uses the valid one with
longest history length according to TAGE algorithm. Branch
target comes from branch target buffer. The BTB also uses PC to
index. All the tables can be implemented by distributed RAM on
FPGA, using implication of single-write port array.

## Fetch module

The core of fetch module is fetch target queue, which decouples
branch predictor and instruction fetch and buffer physical
addresses and data. FTQ has some fields including virtual PC
`vpc`, physical PC `ppc`, `data`, access fault `af`, page fault
`pf` and some fields passing branch predictor information.

![Fetch module](../../util/fig/fetch.png)
