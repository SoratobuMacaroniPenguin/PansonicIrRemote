# PansonicIrRemote

Version 0.0  
Version 0.1 送信信号で間違った部分の修正をしています。LICENSE.mdを追加

自宅にあるテレビをAIY Project Kit で操作したいということが事の発端。  
Raspberry Piから直接Lircライブラリーを使用しようしてテレビを操作しようと考えたのですが、ライブラリーの更新による設定の変更が多く、使用するのが大変そうでしたので、Arduinoでirremoteライブラリーを使用してテレビを操作することにしました。  
最終的にはAIY Project Kit使用することを考えているので、ＰＣとArduino間シリアル通信で操作するようにしています。  

動作確認　テレビの型式　SHARP LC-42EX5  
<table>
  <tr>
    <td>送信文字</td>
    <td>命令内容</td>
 </tr>
  <tr>
    <td>1</td>
    <td>1チャンネル</td>
 </tr>
  <tr>
    <td>2</td>
    <td>2チャンネル</td>
 </tr>
  <tr>
    <td>3</td>
    <td>3チャンネル</td>
 </tr>
  <tr>
    <td>4</td>
    <td>4チャンネル</td>
 </tr>
  <tr>
    <td>5</td>
    <td>5チャンネル</td>
 </tr>
  <tr>
    <td>6</td>
    <td>6チャンネル</td>
 </tr>
  <tr>
    <td>7</td>
    <td>7チャンネル</td>
 </tr>
  <tr>
    <td>8</td>
    <td>8チャンネル</td>
 </tr>
  <tr>
    <td>9</td>
    <td>9チャンネル</td>
 </tr>
  <tr>
    <td>a</td>
    <td>10チャンネル</td>
 </tr>
  <tr>
    <td>b</td>
    <td>11チャンネル</td>
 </tr>
  <tr>
    <td>c</td>
    <td>12チャンネル</td>
 </tr>
  <tr>
    <td>d</td>
    <td>ボリュームダウン</td>
 </tr>
  <tr>
    <td>e</td>
    <td>決定ボタン</td>
 </tr>
  <tr>
    <td>f</td>
    <td>カーソルダウン</td>
 </tr>
  <tr>
    <td>l</td>
    <td>カーソル左</td>
 </tr>
  <tr>
    <td>p</td>
    <td>電源ＯｎＯｆｆ</td>
 </tr>
  <tr>
    <td>r</td>
    <td>カーソル右</td>
 </tr>
  <tr>
    <td>s</td>
    <td>番組表</td>
 </tr>
  <tr>
    <td>u</td>
    <td>ボリュームアップ</td>
 </tr>
  <tr>
    <td>v</td>
    <td>カーソルアップ</td>
 </tr>
</table>
<blockquote>
  ※お願い  <br>
   我が家ではDENONのFR-7GXを使用していました。<br>
このオーディオの特徴としてかなり難しい操作でさえもリモコンで行うことができる画期的なものでした。逆にオーディオの本体でできることはシンプルな操作に限られていました。
  ある時、リモコンの電池が液漏れしてからリモコンが使えなくなり、そのためＣＤやラジオの切り替えさえもできなくなり、現在ではただの飾りとなりはてています。<br>
  どなたかDENONのFR-7GXをお持ちの方、リモコンの出力信号を読みとっていただけないでしょうか。<br>
</blockquote>  

