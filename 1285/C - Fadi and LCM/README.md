<h2><a href="https://codeforces.com/contest/1285/problem/C" target="_blank" rel="noopener noreferrer">1285C — Fadi and LCM</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1285C](https://codeforces.com/contest/1285/problem/C) |

## Topics
`brute force` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">C. Fadi and LCM</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Today, Osama gave Fadi an integer $$$X$$$, and Fadi was wondering about the minimum possible value of $$$max(a, b)$$$ such that $$$LCM(a, b)$$$ equals $$$X$$$. Both $$$a$$$ and $$$b$$$ should be positive integers.</p><p>$$$LCM(a, b)$$$ is the smallest positive integer that is divisible by both $$$a$$$ and $$$b$$$. For example, $$$LCM(6, 8) = 24$$$, $$$LCM(4, 12) = 12$$$, $$$LCM(2, 3) = 6$$$.</p><p>Of course, Fadi immediately knew the answer. Can you be just like Fadi and find any such pair?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first and only line contains an integer $$$X$$$ ($$$1 \le X \le 10^{12}$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print two positive integers, $$$a$$$ and $$$b$$$, such that the value of $$$max(a, b)$$$ is minimum possible and $$$LCM(a, b)$$$ equals $$$X$$$. If there are several possible such pairs, you can print any.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0019012873786893625" id="id003214175531201027" class="input-output-copier">Copy</div></div><pre id="id0019012873786893625">2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008977410007623324" id="id00809834087397316" class="input-output-copier">Copy</div></div><pre id="id008977410007623324">1 2
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004600132200108705" id="id008376813754411625" class="input-output-copier">Copy</div></div><pre id="id004600132200108705">6
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00140039951116672" id="id007932390595766573" class="input-output-copier">Copy</div></div><pre id="id00140039951116672">2 3
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0016648620487998256" id="id006953773285689403" class="input-output-copier">Copy</div></div><pre id="id0016648620487998256">4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0039096693848707875" id="id008624129394144546" class="input-output-copier">Copy</div></div><pre id="id0039096693848707875">1 4
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0008563691064020895" id="id0005459011499695221" class="input-output-copier">Copy</div></div><pre id="id0008563691064020895">1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007520173972174197" id="id003631489083984566" class="input-output-copier">Copy</div></div><pre id="id007520173972174197">1 1
</pre></div></div></div>