<h2><a href="https://codeforces.com/contest/1080/problem/A" target="_blank" rel="noopener noreferrer">1080A — Petya and Origami</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1080A](https://codeforces.com/contest/1080/problem/A) |

## Topics
`math`

---

## Problem Statement

<div class="header"><div class="title">A. Petya and Origami</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Petya is having a party soon, and he has decided to invite his $$$n$$$ friends.</p><p>He wants to make invitations in the form of origami. For each invitation, he needs <span class="tex-font-style-bf">two</span> red sheets, <span class="tex-font-style-bf">five</span> green sheets, and <span class="tex-font-style-bf">eight</span> blue sheets. The store sells an infinite number of notebooks of each color, but each notebook consists of only <span class="tex-font-style-bf">one</span> color with $$$k$$$ sheets. That is, each notebook contains $$$k$$$ sheets of either red, green, or blue.</p><p>Find the minimum number of notebooks that Petya needs to buy to invite all $$$n$$$ of his friends.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains two integers $$$n$$$ and $$$k$$$ ($$$1\leq n, k\leq 10^8$$$) — the number of Petya's friends and the number of sheets in each notebook respectively.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print one number — the minimum number of notebooks that Petya needs to buy.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0084275770207322" id="id003570604523627853" class="input-output-copier">Copy</div></div><pre id="id0084275770207322">3 5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005164621893384941" id="id003364635153058191" class="input-output-copier">Copy</div></div><pre id="id005164621893384941">10
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006855054877294727" id="id008246982255502558" class="input-output-copier">Copy</div></div><pre id="id006855054877294727">15 6
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009615102519137936" id="id0026918915915349306" class="input-output-copier">Copy</div></div><pre id="id009615102519137936">38
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, we need $$$2$$$ red notebooks, $$$3$$$ green notebooks, and $$$5$$$ blue notebooks.</p><p>In the second example, we need $$$5$$$ red notebooks, $$$13$$$ green notebooks, and $$$20$$$ blue notebooks.</p></div>