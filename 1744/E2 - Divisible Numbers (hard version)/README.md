<h2><a href="https://codeforces.com/contest/1744/problem/E2" target="_blank" rel="noopener noreferrer">1744E2 — Divisible Numbers (hard version)</a></h2>

| | |
|---|---|
| **Difficulty** | 1900 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1744E2](https://codeforces.com/contest/1744/problem/E2) |

## Topics
`brute force` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">E2. Divisible Numbers (hard version)</div><div class="time-limit"><div class="property-title">time limit per test</div>4 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p><span class="tex-font-style-bf">This is an hard version of the problem. The only difference between an easy and a hard version is the constraints on $$$a$$$, $$$b$$$, $$$c$$$ and $$$d$$$.</span></p><p>You are given $$$4$$$ positive integers $$$a$$$, $$$b$$$, $$$c$$$, $$$d$$$ with $$$a  \lt  c$$$ and $$$b  \lt  d$$$. Find any pair of numbers $$$x$$$ and $$$y$$$ that satisfies the following conditions:</p><ul><li> $$$a  \lt  x \leq c$$$, $$$b  \lt  y \leq d$$$,</li><li> $$$x \cdot y$$$ is divisible by $$$a \cdot b$$$.</li></ul><p>Note that required $$$x$$$ and $$$y$$$ may not exist.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains a single integer $$$t$$$ $$$(1 \leq t \leq 10$$$), the number of test cases.</p><p>The descriptions of the test cases follow.</p><p>The only line of each test case contains four integers $$$a$$$, $$$b$$$, $$$c$$$ and $$$d$$$ ($$$1 \leq a  \lt  c \leq 10^9$$$, $$$1 \leq b  \lt  d \leq 10^9$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case print a pair of numbers $$$a  \lt  x \leq c$$$ and $$$b  \lt  y \leq d$$$ such that $$$x \cdot y$$$ is divisible by $$$a \cdot b$$$. If there are multiple answers, print any of them. If there is no such pair of numbers, then print <span class="tex-font-style-tt">-1 -1</span>.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id000049613196297376705" id="id0039884309823601616" class="input-output-copier">Copy</div></div><pre id="id000049613196297376705"><div class="test-example-line test-example-line-even test-example-line-0">10</div><div class="test-example-line test-example-line-odd test-example-line-1">1 1 2 2</div><div class="test-example-line test-example-line-even test-example-line-2">3 4 5 7</div><div class="test-example-line test-example-line-odd test-example-line-3">8 9 15 18</div><div class="test-example-line test-example-line-even test-example-line-4">12 21 14 24</div><div class="test-example-line test-example-line-odd test-example-line-5">36 60 48 66</div><div class="test-example-line test-example-line-even test-example-line-6">1024 729 373248 730</div><div class="test-example-line test-example-line-odd test-example-line-7">1024 729 373247 730</div><div class="test-example-line test-example-line-even test-example-line-8">5040 40320 40319 1000000000</div><div class="test-example-line test-example-line-odd test-example-line-9">999999999 999999999 1000000000 1000000000</div><div class="test-example-line test-example-line-even test-example-line-10">268435456 268435456 1000000000 1000000000</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007393829633665687" id="id0026121294978486553" class="input-output-copier">Copy</div></div><pre id="id007393829633665687">2 2
4 6
12 12
-1 -1
-1 -1
373248 730
-1 -1
15120 53760
-1 -1
536870912 536870912
</pre></div></div></div>