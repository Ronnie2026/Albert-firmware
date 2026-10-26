/* Firmware entry: 0x4816bf3c */

undefined4 FUN_ram_4816bf3c(undefined4 param_1,int param_2,int param_3,int param_4,uint *param_5)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_4 == 0x303) {
    if (param_3 != 0) {
      iVar3 = FUN_ram_48188b9e(param_1,0x80);
      uVar2 = 0;
      if (iVar3 != 0) {
        *param_5 = *param_5 | 0x800;
        puVar4 = &DAT_ram_481ddf60;
        uVar2 = 0xffffffff;
        goto LAB_ram_4816bf80;
      }
      goto LAB_ram_4816bf78;
    }
    bVar1 = *(byte *)(param_2 + 10);
    if (bVar1 == 7) {
LAB_ram_4816c00a:
      iVar3 = FUN_ram_48188b9e(param_1,0x20);
    }
    else if (bVar1 < 8) {
      if (bVar1 == 1) goto LAB_ram_4816c00a;
      if (2 < (byte)(bVar1 - 2)) goto LAB_ram_4816c038;
      iVar3 = FUN_ram_48188b9e(param_1,0x80);
    }
    else if ((byte)(bVar1 - 9) < 2) {
      iVar3 = FUN_ram_48188b9e(param_1,8);
    }
    else {
LAB_ram_4816c038:
      iVar3 = FUN_ram_48188b9e(param_1,0);
    }
    if (iVar3 == 0) {
      puVar4 = &DAT_ram_481ddf54;
      uVar2 = 0;
      goto LAB_ram_4816bf80;
    }
    *param_5 = *param_5 | 0x800;
    uVar2 = 0xffffffff;
  }
  else {
    iVar3 = FUN_ram_48188b9e(param_1,0x80);
    uVar2 = 0;
    if (iVar3 != 0) {
      *param_5 = *param_5 | 0x800;
      uVar2 = 0xffffffff;
    }
    if (param_3 != 0) {
LAB_ram_4816bf78:
      puVar4 = &DAT_ram_481ddf60;
      goto LAB_ram_4816bf80;
    }
  }
  puVar4 = &DAT_ram_481ddf54;
LAB_ram_4816bf80:
  iVar3 = FUN_ram_48188bd6(param_1,puVar4,8);
  if (iVar3 != 0) {
    uVar2 = 0xffffffff;
    *param_5 = *param_5 | 0x1000;
  }
  return uVar2;
}


