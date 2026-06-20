<h2><a href="https://codeforces.com/contest/1744/problem/E1" target="_blank" rel="noopener noreferrer">1744E1 — Divisible Numbers (easy version)</a></h2>

| | |
|---|---|
| **Difficulty** | 1500 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1744E1](https://codeforces.com/contest/1744/problem/E1) |

## Topics
`brute force` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">E1. Divisible Numbers (easy version)</div><div class="time-limit"><div class="property-title">time limit per test</div>4 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p><span class="tex-font-style-bf">This is an easy version of the problem. The only difference between an easy and a hard version is the constraints on $$$a$$$, $$$b$$$, $$$c$$$ and $$$d$$$.</span></p><p>You are given $$$4$$$ positive integers $$$a$$$, $$$b$$$, $$$c$$$, $$$d$$$ with $$$a  \lt  c$$$ and $$$b  \lt  d$$$. Find any pair of numbers $$$x$$$ and $$$y$$$ that satisfies the following conditions:</p><ul><li> $$$a  \lt  x \leq c$$$, $$$b  \lt  y \leq d$$$,</li><li> $$$x \cdot y$$$ is divisible by $$$a \cdot b$$$.</li></ul><p>Note that required $$$x$$$ and $$$y$$$ may not exist.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains a single integer $$$t$$$ $$$(1 \leq t \leq 10$$$), the number of test cases.</p><p>The descriptions of the test cases follow.</p><p>The only line of each test case contains four integers $$$a$$$, $$$b$$$, $$$c$$$ and $$$d$$$ ($$$1 \leq a  \lt  c \leq 10^5$$$, $$$1 \leq b  \lt  d \leq 10^5$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case print a pair of numbers $$$a  \lt  x \leq c$$$ and $$$b  \lt  y \leq d$$$ such that $$$x \cdot y$$$ is divisible by $$$a \cdot b$$$. If there are multiple answers, print any of them. If there is no such pair of numbers, then print <span class="tex-font-style-tt">-1 -1</span>.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00553578959529052" id="id007771891455152908" class="input-output-copier">Copy</div></div><pre id="id00553578959529052"><div class="test-example-line test-example-line-even test-example-line-0">5</div><div class="test-example-line test-example-line-odd test-example-line-1">1 1 2 2</div><div class="test-example-line test-example-line-even test-example-line-2">3 4 5 7</div><div class="test-example-line test-example-line-odd test-example-line-3">8 9 15 18</div><div class="test-example-line test-example-line-even test-example-line-4">12 21 14 24</div><div class="test-example-line test-example-line-odd test-example-line-5">36 60 48 66</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00554482841711769" id="id0043345991148562135" class="input-output-copier">Copy</div></div><pre id="id00554482841711769">2 2
4 6
12 12
-1 -1
-1 -1
</pre></div></div></div>