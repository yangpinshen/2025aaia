size(300, 300);
background(0); // 黑色背景
stroke(255, 0, 0); // 设定红色画笔

for (int xx = 0; xx < 300; xx++) {
  for (int yy = 0; yy < 300; yy++) {
    float x = (xx - 150) / 100.0;
    float y = -(yy - 150) / 100.0; // 这里修正括号问题
    float d = x * x + y * y - 1;
    
    if (d * d * d - x * x * y * y < 0) {
      point(xx, yy);
    }
  }
}
