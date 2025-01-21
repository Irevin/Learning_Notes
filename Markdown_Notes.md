# Markdown Reference



Source:  <[Markdown Reference - Typora Support](https://support.typora.io/Markdown-Reference/#reference-links)>

Chinese Source:<[Typora 的 Markdown 语法 - Typora Support (typoraio.cn)](https://support.typoraio.cn/zh/Markdown-Reference/#图片)>



## Block Elements

### Heading

Heading use 1-6 hash(#) characters at the start of the line,corresponding to heading levels1-6. For example:

```markdown
# This is an H1
## This is an H2
###### This is an H6
```

### Blockquotes

Markdown uses email-style > characters for blockquotes. They are presented as:

```markdown
> This is a blockquotes with two paragraphs. This is the first paragraph.
>
> This is second paragraph. Vestibulum enim wisi, viverra nec, fringilla in, laoreet vitae, risus.


> This is another blockquote with one paragraph. There are three empty lines to separate two blockquotes.
```

> This is a blockquotes with two paragraphs. This is the first paragraph.
>
> > This is second paragraph. Vestibulum enim wisi, viverra nec, fringilla in, laoreet vitae, risus.


> This is another blockquote with one paragraph. There are three empty lines to separate two blockquotes.

### Lists

Typing * list item 1 will create an unordered list.(The * symbol can be replaced with + or -.)

Typing1. list item 1 will create an ordered list.

For example:

```markdown
## un-ordered list
* Red
* Green 
* Blue

## ordered list
1. Red
2. Green
3. Blue
```

###### un-ordered list

* Red
* Green
* Blue

###### ordered list

1. Red
2. Green
3. Blue

### Task list

```markdown
- [ ] a task list item
- [ ] list syntax required
- [ ] normal **formatting**,@mentions,##1234 refs
- [ ] incomplete
- [x] completed
You can change the complete/incomplete state by clicking on the checkbox before the item.
```

- [ ] a task list item
- [ ] list syntax required
- [ ] normal **formatting**,@mentions,##1234 refs
- [ ] incomplete
- [ ] completed

### (Fenced) Code Blocks

type ``` and press *Return*.

````markdown
Here's an example:

```
function test() {
  console.log("notice the blank line before this function?");
}
```

syntax highlighting:
```ruby
require 'redcarpet'
markdown = Redcarpet.new("Hello World!")
puts markdown.to_html
```
````

### Math Blocks

<[Math and Academic Functions - Typora Support](https://support.typora.io/Math/)>

In the Markdown source file, the math block is a *LaTeX* expression wrapped by a pair of '$$' marks:

```latex
$$
\mathbf{V}_1 \times \mathbf{V}_2 =  \begin{vmatrix}
\mathbf{i} & \mathbf{j} & \mathbf{k} \\
\frac{\partial X}{\partial u} &  \frac{\partial Y}{\partial u} & 0 \\
\frac{\partial X}{\partial v} &  \frac{\partial Y}{\partial v} & 0 \\
\end{vmatrix}
$$
```


$$
\mathbf{V}_1 \times \mathbf{V}_2 =  \begin{vmatrix}
\mathbf{i} & \mathbf{j} & \mathbf{k} \\
\frac{\partial X}{\partial u} &  \frac{\partial Y}{\partial u} & 0 \\
\frac{\partial X}{\partial v} &  \frac{\partial Y}{\partial v} & 0 \\
\end{vmatrix}
$$

### Tables

Enter | First Header | Second Header | and press the *Return* key.

```markdown
| First Header  | Second Header |
| ------------- | ------------- |
| Content Cell  | Content Cell  |
| Content Cell  | Content Cell  |
```

| First Header | Second Header |
| ------------ | ------------- |
| Han          | Yu            |

### Footnotes

```markdown
You can create footnotes like this[^fn1] and this[^fn2].

[^fn1]: Here is the *text* of the first **footnote**.
[^fn2]: Here is the *text* of the second **footnote**.
```

You can create footnotes like this[^fn1] and this[^fn2]. 

[^fn1]: Here is the **text** of the first ***\*footnote\****. 
[^fn2]: Here is the **text** of the second ***\*footnote\****.

### Horizontal Rules

Entering  *** or --- on a blank line and pressing *Return* will draw a horizontal line.

***

### TAML Front Matter

Typora now supports YAML Front Matter. Enter --- at the top of the article and then press *Return* to introduce a metadata block. Alternatively, you can insert a metadata block from the top menu of Typora.

<[Draw Diagrams With Markdown - Typora Support](https://support.typora.io/Draw-Diagrams-With-Markdown/)>

### Table of Contents(TOC)

Enter [toc] and press the *Return* key to create a "Table of Contents" section. (update automatically)

[toc]

### Callouts / Github Style Alerts

<[Typora 1.8 - Typora Support](https://support.typora.io/What's-New-1.8/)>



## Span Elements

### Links

Markdown supports two styles of links: inline and reference.

In both styles, the link text is delimited by [square brackets].

#### inline Links

To create an inline link, use a set of regular parentheses immediately after the link text's closing square bracket. Inside the parentheses, put the URL where you want the link to point, along with an optional title for the link, surrounded in quotes. For example:

```markdown
This is [an example](http://example.com/ "Title") inline link.

[This link](http://example.net/) has no title attribute.
```

This is [an example](http://example.com/ "Title") inline link. [This link](http://example.net/) has no title attribute.

#### Internal Links

To create an internal link that creates a 'bookmark' that allows you to jump to that section after clicking on it, use the name of the header element as the href. For example:

```markdown
Hold down Cmd (on Windows: Ctrl) and click on [this link](#block-elements) to jump to the header `Block Elements`. 
```

Hold down Cmd (on Windows: Ctrl) and click on [this link](#block-elements) to jump to the header `Block Elements`. 

#### Reference Links

Reference-style links use a second set of square brackets, inside which you place a label of your choosing to identify the link:

```markdow
This is [an example][id] reference-style link.

Then, anywhere in the document, you define your link label on a line by itself like this:

[id]: http://example.com/  "Optional Title Here"
```

This is [an example][id] reference-style link. Then, anywhere in the document, you define your link label on a line by itself like this: 

[id]: http://example.com/  "Optional Title Here"

Implicit link:

```markdown
[Google][]
And then define the link:

[Google]: http://google.com/
```

[Google][] And then define the link: 

[Google]: http://google.com/

### URL's

Typora allows you to insert URL’s as links, wrapped by `<`brackets`>`. For example `<i@typora.io>` becomes [i@typora.io](mailto:i@typora.io).

Typora will also automatically link standard URLs (for example: www.google.com) without these brackets.

### Images

Images have similar syntax as links but they require an additional `!` char before the start of the link. The syntax for inserting an image looks like this:

```markdown
![Alt text](/path/to/img.jpg)

![Alt text](/path/to/img.jpg "Optional title")
```



<img src="C:\Users\Irevin\Desktop\v2-5cc2c54cb1330782a08140b64ff0578e_r.jpg" alt="v2-5cc2c54cb1330782a08140b64ff0578e_r" style="zoom:25%;" />

More details: <http://support.typora.io//Images/>

### Emphasis

```markdown
*single asterisks*

_single underscores_
```

*single asterisks* 

_single underscores_

GFM will ignore underscores in words, which is commonly used in code and names, like this:

> wow_great_stuff
>
> do_this_and_do_that_and_another_thing

To produce a literal asterisk or underscore at a position where it would otherwise be used as an emphasis delimiter, you can backslash escape it with a backslash character:

```markdown
\*this text is surrounded by literal asterisks\*
```

\*this text is surrounded by literal asterisks\*

### Strong

A double `*` or `_` will cause its enclosed contents to be wrapped with an HTML `<strong>` tag, e.g:

```markdown
**double asterisks**

__double underscores__
```

produces:

**double asterisks**

**double underscores**

Typora recommends using the `**` symbol.

### Code

To indicate an inline span of code, wrap it with backtick quotes(`). Unlike a pre-formatted code block, a code span indicates code within a normal paragraph. For example:

```
Use the `printf()` function.
```

Use the `printf()` function.

### Strikethrough

GFM adds syntax to create strikethrough text, which is missing from standard Markdown.

```
~~Mistaken text.~~
```

~~Mistaken test.~~

### Emoji :happy:

Enter emoji with syntax ​`:smile:`​. To make it easier, an auto-complete helper will pop up after typing : and the start of an emoji name.

### Inline math

To use this feature, please enable it first in the `Markdown` tab of the preference panel. Then, use `$` to wrap a LaTeX command. For example: `$\lim_{x \to \infty} \exp(-x) = 0$`.

More details: <[Math and Academic Functions - Typora Support](https://support.typora.io/Math/)>

### Subscript

use ~ to wrap subscript content. For example: `H~2~O`, `X~long\ text~`/

H~2~O

### Superscipt

use ^ to wrap superscript content. For example:`X^2^`

X^2^

### Highlight 

use == to wrap highlight content. For example:`==highlight==`

==highlight==



## HTML

You can use HTML to style content where pure Markdown does not provide support. For example:

`<span style="color:red">this text is red</span>`

<span style="color:red">this text is red</span>

### Underlines

Underline is not specified in Markdown of GFM, but can be produced by using underline HTML tags:

`<u>Underline</u>`

<u>Underline</u>

### Embed Contents

Some websites provide iframe-based embed code which you can also paste into Typora.

```Markdown
<iframe height='265' scrolling='no' title='Fancy Animated SVG Menu' src='http://codepen.io/jeangontijo/embed/OxVywj/?height=265&theme-id=0&default-tab=css,result&embed-version=2' frameborder='no' allowtransparency='true' allowfullscreen='true' style='width: 100%;'></iframe>
```

<iframe height='265' scrolling='no' title='Fancy Animated SVG Menu' src='http://codepen.io/jeangontijo/embed/OxVywj/?height=265&theme-id=0&default-tab=css,result&embed-version=2' frameborder='no' allowtransparency='true' allowfullscreen='true' style='width: 100%;'></iframe>

### Video

You can use the `<video>` HTML, tag to embed videos. For example:

`<video src="xxx.mp4">`

### Other HTML Support

<[HTML Support in Typora - Typora Support](https://support.typora.io/HTML/)>
