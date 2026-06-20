<h2><a href="https://codeforces.com/contest/1139/problem/B" target="_blank" rel="noopener noreferrer">1139B — Chocolates</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1139B](https://codeforces.com/contest/1139/problem/B) |

## Topics
`greedy` `implementation`

---

## Problem Statement

<div class="header"><div class="title">B. Chocolates</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You went to the store, selling $$$n$$$ types of chocolates. There are $$$a_i$$$ chocolates of type $$$i$$$ in stock.</p><p>You have unlimited amount of cash (so you are not restricted by any prices) and want to buy as many chocolates as possible. However if you buy $$$x_i$$$ chocolates of type $$$i$$$ (clearly, $$$0 \le x_i \le a_i$$$), then for all $$$1 \le j  \lt  i$$$ at least one of the following must hold:</p><ul> <li> $$$x_j = 0$$$ (you bought zero chocolates of type $$$j$$$)</li><li> $$$x_j  \lt  x_i$$$ (you bought less chocolates of type $$$j$$$ than of type $$$i$$$) </li></ul><p>For example, the array $$$x = [0, 0, 1, 2, 10]$$$ satisfies the requirement above (assuming that all $$$a_i \ge x_i$$$), while arrays $$$x = [0, 1, 0]$$$, $$$x = [5, 5]$$$ and $$$x = [3, 2]$$$ don't.</p><p>Calculate the maximum number of chocolates you can buy.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer $$$n$$$ ($$$1 \le n \le 2 \cdot 10^5$$$), denoting the number of types of chocolate.</p><p>The next line contains $$$n$$$ integers $$$a_i$$$ ($$$1 \le a_i \le 10^9$$$), denoting the number of chocolates of each type.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print the maximum number of chocolates you can buy.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0018008532968399626" id="id009429450276898379" class="input-output-copier">Copy</div></div><pre id="id0018008532968399626">5
1 2 1 3 6
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0049205622198633947" id="id0017534677675767807" class="input-output-copier">Copy</div></div><pre id="id0049205622198633947">10</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0044942494674007527" id="id001689491136087352" class="input-output-copier">Copy</div></div><pre id="id0044942494674007527">5
3 2 5 4 10
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0014384811225890604" id="id008247645043578263" class="input-output-copier">Copy</div></div><pre id="id0014384811225890604">20</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0015024834551453614" id="id008903160765920701" class="input-output-copier">Copy</div></div><pre id="id0015024834551453614">4
1 1 1 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00713479879577428" id="id002574077468205862" class="input-output-copier">Copy</div></div><pre id="id00713479879577428">1</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, it is optimal to buy: $$$0 + 0 + 1 + 3 + 6$$$ chocolates.</p><p>In the second example, it is optimal to buy: $$$1 + 2 + 3 + 4 + 10$$$ chocolates.</p><p>In the third example, it is optimal to buy: $$$0 + 0 + 0 + 1$$$ chocolates.</p></div>