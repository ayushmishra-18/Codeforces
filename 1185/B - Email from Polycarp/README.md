<h2><a href="https://codeforces.com/contest/1185/problem/B" target="_blank" rel="noopener noreferrer">1185B — Email from Polycarp</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1185B](https://codeforces.com/contest/1185/problem/B) |

## Topics
`implementation` `strings`

---

## Problem Statement

<div class="header"><div class="title">B. Email from Polycarp</div><div class="time-limit"><div class="property-title">time limit per test</div>3 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Methodius received an email from his friend Polycarp. However, Polycarp's keyboard is broken, so pressing a key on it once may cause the corresponding symbol to appear more than once (if you press a key on a regular keyboard, it prints exactly one symbol).</p><p>For example, as a result of typing the word "<span class="tex-font-style-tt">hello</span>", the following words <span class="tex-font-style-bf">could</span> be printed: "<span class="tex-font-style-tt">hello</span>", "<span class="tex-font-style-tt">hhhhello</span>", "<span class="tex-font-style-tt">hheeeellllooo</span>", but the following <span class="tex-font-style-bf">could not</span> be printed: "<span class="tex-font-style-tt">hell</span>", "<span class="tex-font-style-tt">helo</span>", "<span class="tex-font-style-tt">hhllllooo</span>".</p><p>Note, that when you press a key, the corresponding symbol must appear (possibly, more than once). The keyboard is broken in a random manner, it means that pressing the same key you can get the different number of letters in the result.</p><p>For each word in the letter, Methodius has guessed what word Polycarp actually wanted to write, but he is not sure about it, so he asks you to help him.</p><p>You are given a list of pairs of words. For each pair, determine if the second word could be printed by typing the first one on Polycarp's keyboard.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains one integer $$$n$$$ ($$$1 \le n \le 10^5$$$) — the number of pairs to check. Further input contains $$$n$$$ descriptions of pairs.</p><p>The first line of each description contains a single non-empty word $$$s$$$ consisting of lowercase Latin letters. The second line of the description contains a single non-empty word $$$t$$$ consisting of lowercase Latin letters. The lengths of both strings are not greater than $$$10^6$$$.</p><p>It is guaranteed that the total length of all words $$$s$$$ in the input is not greater than $$$10^6$$$. Also, it is guaranteed that the total length of all words $$$t$$$ in the input is not greater than $$$10^6$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Output $$$n$$$ lines. In the $$$i$$$-th line for the $$$i$$$-th pair of words $$$s$$$ and $$$t$$$ print <span class="tex-font-style-tt">YES</span> if the word $$$t$$$ could be printed by typing the word $$$s$$$. Otherwise, print <span class="tex-font-style-tt">NO</span>.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0025489718608345024" id="id0010208428443757045" class="input-output-copier">Copy</div></div><pre id="id0025489718608345024">4
hello
hello
hello
helloo
hello
hlllloo
hello
helo
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00038457243545200415" id="id007027866708079543" class="input-output-copier">Copy</div></div><pre id="id00038457243545200415">YES
YES
NO
NO
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0042292055561877995" id="id007998396288495963" class="input-output-copier">Copy</div></div><pre id="id0042292055561877995">5
aa
bb
codeforces
codeforce
polycarp
poolycarpp
aaaa
aaaab
abcdefghijklmnopqrstuvwxyz
zabcdefghijklmnopqrstuvwxyz
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006324122902280432" id="id009732322878811868" class="input-output-copier">Copy</div></div><pre id="id006324122902280432">NO
NO
YES
NO
NO
</pre></div></div></div>