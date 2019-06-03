" vim設定ファイル
" ヴァニラ vi 用(tiny-vim)

" 蛇足：英語圏の言い回しで、何も添加物がない、混ぜ物ではないという意味で
" ヴァニラ (Vanilla) といった言葉が使われる

" "(ダブルクオート)で始まる行はコメント行

" 行番号表示
set number

" 前の行のインデント数を引き継ぐ
set autoindent

" 構文に応じたインデントの増減を行う
" vi 互換では無効
set smartindent

" タブ文字の幅指定
set tabstop=4

" インデントシフト操作の時のインデント量を指定
" インデントシフト操作は
" normalモード時 >> <<
" insertモード時 Ctrl+t Ctrl+d
set shiftwidth=4

" タブ入力をスペース変換しない
set noexpandtab

" 言語ごとの構文カラー表示を有効
" vi 互換では無効
syntax on

" ステータスラインの行数を増やす
set laststatus=2

