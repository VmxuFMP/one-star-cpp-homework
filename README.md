# 💻 程式設計課程：GitHub 作業繳交指南

歡迎來到本課程！這份指南將帶你一步步了解如何使用 Git 與 GitHub 來管理你的程式碼，並在完成作業後順利上傳繳交。

如果你是第一次接觸 Git，別擔心，只要跟著以下步驟操作即可！





## 🛠️ 事前準備 (Prerequisites)

在開始之前，請確保你已經完成以下設定：
1. **註冊 GitHub 帳號**：前往 [GitHub](https://github.com/) 註冊一個免費帳號。
2. **安裝 Git**：請至 [Git 官網](https://git-scm.com/) 下載並安裝適合你作業系統的版本。
3. **終端機登入設定**：打開終端機 (Terminal / 命令提示字元)，設定你的 Git 使用者名稱與信箱（需與 GitHub 帳號一致）：
   ```bash
   git config --global user.name "你的名字或 GitHub 帳號"
   git config --global user.email "你的 GitHub 信箱"
   ```


## 🚀 作業繳交流程 (Step-by-Step Guide)

**第一步：初始化本地數據庫 (Local Repository)**

當你準備好要開始寫作業，或已經建立好作業資料夾時，請打開終端機，進入你的作業資料夾，並輸入以下指令來初始化 Git：
    
```bash
git init
```

這會在你的資料夾中建立一個隱藏的 .git 目錄，讓 Git 開始追蹤這個資料夾的變化。

**第二步：完成你的程式碼**

在資料夾中建立對應的程式碼檔案（例如 `hw1.cpp` 或 `main.py`），並完成你的作業邏輯。

**第三步：將變更加入暫存區 (Staging Area)**

寫完程式後，你需要告    訴 Git 哪些檔案是你這次想要提交的。使用以下指令將所有變更加入暫存區：

> [!NOTE]
> `add` 後面有一個空格和一個小數點 `.`，代表加入當前目錄下的所有檔案。

**第四步：提交版本紀錄 (Commit)**

將暫存區的檔案正式提交，並附上一段簡短的訊息來描述這次的進度：

```bash
git commit -m "feat: 完成第一次作業"
```

**第五步：推送到 GitHub (Push)**

1. 前往 GitHub 網站，點擊右上角的 + 選擇 New repository，建立一個新的數據庫（Repository 名稱請依照課程規定，例如 `Programming-HW1`）。

2. 建立完成後，複製 GitHub 提供的 Repo 網址。

3. 回到終端機，將本地數據庫與 GitHub 上的遠端數據庫連接，並推送上去：
    ```bash
    git branch -M main
    git remote add origin <你的_GitHub_Repo_網址>
    git push -u origin main
    ```

> [!IMPORTANT]
> - 養成隨時 `commit` 的好習慣，不要等到整份作業寫完才做一次 commit，這樣有助於追蹤錯誤。
> - 提交的訊息 (Commit Message) 盡量寫得清楚明瞭，讓助教和未來的自己都能看懂。

