/* Firmware entry: 0x48007eee */

undefined4 FUN_ram_48007eee(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = *(uint *)(&DAT_ram_48235d98 + (param_1 * 5 + param_3) * 4);
  if ((uVar1 & 0x78000) == 0x78000) {
    return 0;
  }
  uVar3 = 0;
  if ((~uVar1 & 0x7fff) != 0) {
    iVar2 = (int)(uVar1 << 0x11) >> 0x11;
    if (iVar2 != param_2) {
      return uVar3;
    }
    if (param_1 < 5) {
      if ((uVar1 & 0x80000) == 0) {
        FUN_ram_4812baee(iVar2);
      }
      else {
        FUN_ram_4812ba22(iVar2,(int)(uVar1 << 0xd) >> 0x1c,uVar1 >> 0x14);
      }
    }
    else {
      FUN_ram_4812c15c(iVar2);
      iVar4 = (int)(uVar1 << 0xd) >> 0x1c;
      if ((uVar1 & 0x80000) == 0) {
        FUN_ram_4812c642(iVar2,iVar4);
      }
      else {
        FUN_ram_4812c5a8(iVar2,iVar4,uVar1 >> 0x14);
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}


