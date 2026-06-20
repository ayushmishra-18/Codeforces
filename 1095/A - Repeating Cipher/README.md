<h2><a href="https://codeforces.com/contest/1095/problem/A" target="_blank" rel="noopener noreferrer">1095A — Repeating Cipher</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1095A](https://codeforces.com/contest/1095/problem/A) |

## Topics
`implementation`

---

## Problem Statement

<div class="header"><div class="title">A. Repeating Cipher</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Polycarp loves ciphers. He has invented his own cipher called <span class="tex-font-style-it">repeating</span>.</p><p>Repeating cipher is used for strings. To encrypt the string $$$s=s_{1}s_{2} \dots s_{m}$$$ ($$$1 \le m \le 10$$$), Polycarp uses the following algorithm:</p><ul> <li> he writes down $$$s_1$$$ ones, </li><li> he writes down $$$s_2$$$ twice, </li><li> he writes down $$$s_3$$$ three times, </li><li> ... </li><li> he writes down $$$s_m$$$ $$$m$$$ times. </li></ul><p>For example, if $$$s$$$="<span class="tex-font-style-tt">bab</span>" the process is: "<span class="tex-font-style-tt">b</span>" $$$\to$$$ "<span class="tex-font-style-tt">baa</span>" $$$\to$$$ "<span class="tex-font-style-tt">baabbb</span>". So the encrypted $$$s$$$="<span class="tex-font-style-tt">bab</span>" is "<span class="tex-font-style-tt">baabbb</span>".</p><p>Given string $$$t$$$ — the result of encryption of some string $$$s$$$. Your task is to decrypt it, i. e. find the string $$$s$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains integer $$$n$$$ ($$$1 \le n \le 55$$$) — the length of the encrypted string. The second line of the input contains $$$t$$$ — the result of encryption of some string $$$s$$$. It contains only lowercase Latin letters. The length of $$$t$$$ is exactly $$$n$$$.</p><p>It is guaranteed that the answer to the test exists.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print such string $$$s$$$ that after encryption it equals $$$t$$$.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0024642370233298516" id="id009288811621981163" class="input-output-copier">Copy</div></div><pre id="id0024642370233298516">6
baabbb
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006548217567702014" id="id0007045127047099065" class="input-output-copier">Copy</div></div><pre id="id006548217567702014">bab</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id002256461155563083" id="id002632121910155977" class="input-output-copier">Copy</div></div><pre id="id002256461155563083">10
ooopppssss
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005001526560736427" id="id0020581591482836015" class="input-output-copier">Copy</div></div><pre id="id005001526560736427">oops</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008169659210878675" id="id0020026404221520133" class="input-output-copier">Copy</div></div><pre id="id008169659210878675">1
z
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008014432282602283" id="id0030265114390821823" class="input-output-copier">Copy</div></div><pre id="id008014432282602283">z</pre></div></div></div>