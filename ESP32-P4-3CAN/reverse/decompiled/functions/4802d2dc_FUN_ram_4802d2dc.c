/* Firmware entry: 0x4802d2dc */

bool FUN_ram_4802d2dc(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((DAT_ram_4ff6df88 != 0) && (iVar3 = FUN_ram_4ff3b5f0(DAT_ram_4ff6df88,0x32), iVar3 == 1)) {
    fence();
    if ((DAT_ram_4ff6df84 == '\0') && (fence(), DAT_ram_4ff6df5c == 0)) {
      DAT_ram_4ff6df58 = 0;
      if (param_1 == 0) {
        iVar2 = 2;
        iVar3 = 4;
      }
      else {
        iVar3 = 3;
        iVar2 = 1;
      }
      fence();
      DAT_ram_4ff6df5c = iVar2;
      FUN_ram_4ff3afa2(DAT_ram_4ff6df88,0,0,0);
      iVar1 = 100;
      do {
        fence();
        if (iVar3 == DAT_ram_4ff6df5c) break;
        iVar1 = iVar1 + -1;
        FUN_ram_4ff3c2b6(1);
      } while (iVar1 != 0);
      iVar1 = DAT_ram_4ff6df5c;
      if (DAT_ram_4ff6df5c == iVar2) {
        DAT_ram_4ff6df5c = 0;
      }
      return iVar1 == iVar3 && iVar1 != iVar2;
    }
    FUN_ram_4ff3afa2(DAT_ram_4ff6df88,0,0,0);
  }
  return false;
}


