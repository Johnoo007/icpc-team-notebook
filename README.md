# 🏆 ICPC Team Notebook (2026)

คลังเก็บอัลกอริทึมและเทมเพลตสำหรับการแข่งขัน ICPC ของทีมเรา ภายในประกอบด้วย Code Snippets ที่ผ่านการคัดสรร, เทมเพลตสำหรับแข่งขัน และการตั้งค่าสภาพแวดล้อมการพัฒนา (Development Environment) ที่ปรับแต่งมาเพื่อ macOS และการเขียนโปรแกรมเชิงแข่งขันโดยเฉพาะ

## 📂 โครงสร้างโปรเจกต์ (Project Structure)

Repository นี้ถูกจัดระเบียบแยกตามโดเมนเพื่อให้เข้าถึงข้อมูลได้รวดเร็วที่สุดระหว่างการแข่งขัน:

* **`.vscode/`**: เก็บการตั้งค่า Workspace รวมถึง Build Tasks และการตั้งค่า IntelliSense เพื่อให้รันโค้ดได้ในคลิกเดียว
* **`algorithms/`**: "คัมภีร์" อัลกอริทึมของเรา แบ่งตามหมวดหมู่: `data_structures`, `dp`, `graph`, `math`, `geometry`, และ `string`
* **`contests/`**: พื้นที่เก็บ Solution และบทเรียน (Post-contest reviews) จากการซ้อม Mock Contest และการแข่งจริง
* **`templates/`**: โค้ดเริ่มต้น (Boilerplate) สำหรับสถานการณ์ต่างๆ เช่น Default, Debug และ Stress Testing
* **`include/bits/`**: ไฟล์ `stdc++.h` แบบกำหนดเอง เพื่อให้ใช้งาน IntelliSense บนเครื่องได้ลื่นไหลและรองรับการทำงานข้ามแพลตฟอร์ม
* **`docs/`**: เอกสารเชิงกลยุทธ์ เช่น Knowledge Maps และแผนการเดินเกมระหว่างแข่ง (Contest Strategy)

## 🚀 เริ่มต้นใช้งาน (Setup)

### 1. สิ่งที่ต้องติดตั้ง (Prerequisites)
ตรวจสอบให้แน่ใจว่าเครื่องของคุณมี C++ Compiler:
* **macOS**: ติดตั้งผ่าน Command Line Tools โดยพิมพ์ `xcode-select --install` ใน Terminal
* **Windows**: แนะนำให้ใช้ **MinGW-w64** และเพิ่ม Path เข้าใน System Environment Variables

### 2. การตั้งค่า VS Code
เราได้ปรับแต่ง Workspace ให้รันโค้ดได้ง่ายที่สุดผ่าน **Code Runner**:
* เปิดโปรเจกต์ด้วย VS Code
* ติดตั้ง Extensions ที่แนะนำในไฟล์ `.vscode/extensions.json`
* ไฟล์ `settings.json` ถูกตั้งค่าให้ดึงไฟล์ `bits/stdc++.h` จากโฟลเดอร์ `include` ของเราโดยอัตโนมัติ

### 3. วิธีการใช้งาน
* **การเขียนโค้ด**: เริ่มต้นจากไฟล์ `templates/default_template.cpp`
* **การรันโค้ด**: กดปุ่ม **Play** (Code Runner) หรือใช้คีย์ลัด `Cmd+Option+N` (Mac) / `Ctrl+Alt+N` (Windows) ผลลัพธ์จะแสดงใน Integrated Terminal ทันที
* **การทดสอบ**: วางเคสทดสอบในไฟล์ `input.txt` ที่ Root ของโปรเจกต์เพื่อความสะดวกในการ Copy

## 🛠 การดูแลรักษาและความสะอาด (Maintenance)

### กฎการใช้งาน Git
เราใช้กฎ `.gitignore` ที่เข้มงวดเพื่อป้องกันไม่ให้ไฟล์ขยะหลุดขึ้นระบบ:
* **ไฟล์ Executable**: ไฟล์ที่คอมไพล์แล้ว (ที่ไม่มีนามสกุล) จะถูก Ignore โดยอัตโนมัติ
* **ไฟล์ระบบ**: ไฟล์จำพวก `.DS_Store` หรือ Metadata ของ OS จะถูกบล็อกทั้งหมด

### มาตรฐานการเขียนโค้ด
ถึงแม้เราจะเน้นความเร็วระหว่างแข่ง แต่โค้ดในโฟลเดอร์ `algorithms/` ควรจะอ่านง่ายและเป็นระเบียบ:
* ใช้ตัวจัดรูปแบบโค้ดมาตรฐานของ VS Code (`Shift+Option+F`) เพื่อให้สไตล์โค้ดของทุกคนในทีมตรงกัน

## 🤝 กลยุทธ์ของทีม
* **Review Sessions**: หลังจบการซ้อมทุกครั้ง เราจะบันทึกข้อผิดพลาดที่พบบ่อยใน `docs/common_mistakes.md`
* **Notebook Updates**: เฉพาะอัลกอริทึมที่ผ่านการทดสอบและพิสูจน์แล้วเท่านั้นที่จะถูกเก็บเข้าในโฟลเดอร์ `algorithms/`

---
*ดูแลโดย [John Wongprasittigul](https://github.com/Johnoo007)*
