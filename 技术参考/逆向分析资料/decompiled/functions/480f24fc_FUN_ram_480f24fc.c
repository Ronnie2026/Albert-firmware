/* Firmware entry: 0x480f24fc */

int FUN_ram_480f24fc(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  fence();
  if (DAT_ram_4ff6deb4 == '\0') {
    return 0;
  }
  cVar1 = '\x0e';
  do {
    fence();
    if (DAT_ram_4ff6de94 == 0) goto LAB_ram_480f2544;
    cVar1 = cVar1 + -1;
    iVar2 = FUN_ram_480ee046(-DAT_ram_4ff6de94 & DAT_ram_4ff6de94);
    if (iVar2 == 0) {
      return 0;
    }
  } while (cVar1 != '\0');
  fence();
  if (DAT_ram_4ff6de94 == 0) {
LAB_ram_480f2544:
    iVar2 = 0;
    if ((DAT_ram_4ff5ca98 != '\0') && (DAT_ram_4ff5ca99 != '\0')) {
      do {
        if (DAT_ram_4ff5ca9c == 0) {
          iVar2 = 1;
          goto LAB_ram_480f255c;
        }
        uVar4 = 0;
        do {
          if ((DAT_ram_4ff5ca9c >> (uVar4 & 0x1f) & 1) != 0) {
            cVar1 = FUN_ram_48087dc6(&DAT_ram_4ff5ca80,uVar4 & 0xff);
            goto LAB_ram_480f2592;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 != 8);
        cVar1 = '\x01';
LAB_ram_480f2592:
      } while (cVar1 != '\0');
      iVar2 = 0;
    }
LAB_ram_480f255c:
    if ((iVar2 != 0) && (DAT_ram_4ff5ca9c == 0)) {
      if (DAT_ram_4ff6dcd5 == '\0') {
        return iVar2;
      }
      iVar2 = 100;
      do {
        fence();
        if (DAT_ram_4ff47ed0 != '\0') break;
        iVar2 = iVar2 + -1;
        FUN_ram_4ff3c2b6(1);
      } while (iVar2 != 0);
      fence();
      if (DAT_ram_4ff47ed0 != '\0') {
        uVar3 = FUN_ram_48025ba6();
        iVar2 = FUN_ram_480d20e2(&DAT_ram_4ff5be28,uVar3,1);
        return iVar2;
      }
    }
  }
  return 0;
}


