<h2><a href="https://codeforces.com/contest/1189/problem/B" target="_blank" rel="noopener noreferrer">1189B — Number Circle</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1189B](https://codeforces.com/contest/1189/problem/B) |

## Topics
`greedy` `math` `sortings`

---

## Problem Statement

<div class="header"><div class="title">B. Number Circle</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given $$$n$$$ numbers $$$a_1, a_2, \ldots, a_n$$$. Is it possible to arrange them in a circle in such a way that every number is <span class="tex-font-style-bf">strictly</span> less than the sum of its neighbors?</p><p>For example, for the array $$$[1, 4, 5, 6, 7, 8]$$$, the arrangement on the left is valid, while arrangement on the right is not, as $$$5\ge 4 + 1$$$ and $$$8 \gt  1 + 6$$$.</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/f87046d148e42905175ba4abb1b357c76f034eb7.png" style="zoom: 100.0%;max-width: 100.0%;max-height: 100.0%;"> </center></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$n$$$ ($$$3\le n \le 10^5$$$) — the number of numbers.</p><p>The second line contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$1 \leq a_i \le 10^9$$$) — the numbers. The given numbers are not necessarily distinct (i.e. duplicates are allowed).</p></div><div class="output-specification"><div class="section-title">Output</div><p>If there is no solution, output "<span class="tex-font-style-tt">NO</span>" in the first line. </p><p>If there is a solution, output "<span class="tex-font-style-tt">YES</span>" in the first line. In the second line output $$$n$$$ numbers — elements of the array in the order they will stay in the circle. The first and the last element you output are considered neighbors in the circle. If there are multiple solutions, output any of them. You can print the circle starting with any element.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007438246661540068" id="id004977813669314751" class="input-output-copier">Copy</div></div><pre id="id007438246661540068">3
2 4 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0024577289911324085" id="id005566161493733682" class="input-output-copier">Copy</div></div><pre id="id0024577289911324085">YES
4 2 3 </pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009194986094425747" id="id0094637853716281" class="input-output-copier">Copy</div></div><pre id="id009194986094425747">5
1 2 3 4 4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id004825677147165166" id="id008857897918227414" class="input-output-copier">Copy</div></div><pre id="id004825677147165166">YES
4 4 2 1 3</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0019965585887064852" id="id0021371848619774958" class="input-output-copier">Copy</div></div><pre id="id0019965585887064852">3
13 8 5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0086229116999034" id="id0047566592216674464" class="input-output-copier">Copy</div></div><pre id="id0086229116999034">NO</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id002889032757653315" id="id007986973543724484" class="input-output-copier">Copy</div></div><pre id="id002889032757653315">4
1 10 100 1000
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008490200423807078" id="id005889407419037831" class="input-output-copier">Copy</div></div><pre id="id008490200423807078">NO</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>One of the possible arrangements is shown in the first example: </p><p>$$$4 \lt  2 + 3$$$;</p><p>$$$2  \lt  4 + 3$$$;</p><p>$$$3 \lt  4 + 2$$$.</p><p>One of the possible arrangements is shown in the second example.</p><p>No matter how we arrange $$$13, 8, 5$$$ in a circle in the third example, $$$13$$$ will have $$$8$$$ and $$$5$$$ as neighbors, but $$$13\ge 8 + 5$$$. </p><p>There is no solution in the fourth example.</p></div>