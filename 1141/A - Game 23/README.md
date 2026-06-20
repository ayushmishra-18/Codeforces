<h2><a href="https://codeforces.com/contest/1141/problem/A" target="_blank" rel="noopener noreferrer">1141A — Game 23</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1141A](https://codeforces.com/contest/1141/problem/A) |

## Topics
`implementation` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Game 23</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Polycarp plays "Game 23". Initially he has a number $$$n$$$ and his goal is to transform it to $$$m$$$. In one move, he can multiply $$$n$$$ by $$$2$$$ or multiply $$$n$$$ by $$$3$$$. He can perform any number of moves.</p><p>Print the number of moves needed to transform $$$n$$$ to $$$m$$$. Print <span class="tex-font-style-tt">-1</span> if it is impossible to do so.</p><p>It is easy to prove that any way to transform $$$n$$$ to $$$m$$$ contains the same number of moves (i.e. number of moves doesn't depend on the way of transformation).</p></div><div class="input-specification"><div class="section-title">Input</div><p>The only line of the input contains two integers $$$n$$$ and $$$m$$$ ($$$1 \le n \le m \le 5\cdot10^8$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print the number of moves to transform $$$n$$$ to $$$m$$$, or <span class="tex-font-style-tt">-1</span> if there is no solution.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0036792429301880036" id="id007636803358582548" class="input-output-copier">Copy</div></div><pre id="id0036792429301880036">120 51840
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id004077770672377109" id="id008000041284362528" class="input-output-copier">Copy</div></div><pre id="id004077770672377109">7
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0031599910346993965" id="id009852922147918237" class="input-output-copier">Copy</div></div><pre id="id0031599910346993965">42 42
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0024154347763636708" id="id000835823210438128" class="input-output-copier">Copy</div></div><pre id="id0024154347763636708">0
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0013774415652133487" id="id003170628861188165" class="input-output-copier">Copy</div></div><pre id="id0013774415652133487">48 72
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id002577183340437733" id="id008452936524521036" class="input-output-copier">Copy</div></div><pre id="id002577183340437733">-1
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, the possible sequence of moves is: $$$120 \rightarrow 240 \rightarrow 720 \rightarrow 1440 \rightarrow 4320 \rightarrow 12960 \rightarrow 25920 \rightarrow 51840.$$$ The are $$$7$$$ steps in total.</p><p>In the second example, no moves are needed. Thus, the answer is $$$0$$$.</p><p>In the third example, it is impossible to transform $$$48$$$ to $$$72$$$.</p></div>