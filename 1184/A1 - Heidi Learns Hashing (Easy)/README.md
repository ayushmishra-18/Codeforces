<h2><a href="https://codeforces.com/contest/1184/problem/A1" target="_blank" rel="noopener noreferrer">1184A1 — Heidi Learns Hashing (Easy)</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1184A1](https://codeforces.com/contest/1184/problem/A1) |

## Topics
`brute force` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">A1. Heidi Learns Hashing (Easy)</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Melody Pond was stolen from her parents as a newborn baby by Madame Kovarian, to become a weapon of the Silence in their crusade against the Doctor. Madame Kovarian changed Melody's name to River Song, giving her a new identity that allowed her to kill the Eleventh Doctor.</p><p>Heidi figured out that Madame Kovarian uses a very complicated hashing function in order to change the names of the babies she steals. In order to prevent this from happening to future Doctors, Heidi decided to prepare herself by learning some basic hashing techniques.</p><p>The first hashing function she designed is as follows.</p><p>Given two positive integers $$$(x, y)$$$ she defines $$$H(x,y):=x^2+2xy+x+1$$$.</p><p>Now, Heidi wonders if the function is reversible. That is, given a positive integer $$$r$$$, can you find a pair $$$(x, y)$$$ (of positive integers) such that $$$H(x, y) = r$$$?</p><p>If multiple such pairs exist, output the one with smallest possible $$$x$$$. If there is no such pair, output "<span class="tex-font-style-tt">NO</span>".</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first and only line contains an integer $$$r$$$ ($$$1 \le r \le 10^{12}$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>Output integers $$$x, y$$$ such that $$$H(x,y) = r$$$ and $$$x$$$ is smallest possible, or "<span class="tex-font-style-tt">NO</span>" if no such pair exists.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004993292269952003" id="id00354017189267122" class="input-output-copier">Copy</div></div><pre id="id004993292269952003">19
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00002350397673629767" id="id0023011975034532095" class="input-output-copier">Copy</div></div><pre id="id00002350397673629767">1 8
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id001706699266238828" id="id0031926728118227954" class="input-output-copier">Copy</div></div><pre id="id001706699266238828">16
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005425933542533026" id="id0008126797094088234" class="input-output-copier">Copy</div></div><pre id="id005425933542533026">NO
</pre></div></div></div>