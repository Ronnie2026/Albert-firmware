/* Firmware entry: 0x4807432c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4807432c(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_29c [161];
  undefined4 uStack_18;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((DAT_ram_4ff47e64 != '\0') && (*(char *)(DAT_ram_4ff6dcc8 + 0x63fd) == '\0')) &&
     ((iVar2 = FUN_ram_48025ba6(), DAT_ram_4ff6dcb8 == '\0' ||
      (4999 < (uint)(iVar2 - DAT_ram_4ff6dcb4))))) {
    puVar7 = &DAT_ram_482230e4;
    DAT_ram_4ff6dcb8 = '\x01';
    puVar6 = local_29c;
    do {
      uVar9 = puVar7[1];
      uVar8 = puVar7[2];
      uVar3 = puVar7[3];
      uVar4 = puVar7[4];
      uVar5 = puVar7[5];
      *puVar6 = *puVar7;
      puVar6[1] = uVar9;
      puVar6[2] = uVar8;
      puVar6[3] = uVar3;
      puVar6[4] = uVar4;
      puVar6[5] = uVar5;
      puVar7 = puVar7 + 6;
      puVar6 = puVar6 + 6;
    } while (puVar7 != (undefined4 *)&DAT_ram_4822336c);
    *puVar6 = _DAT_ram_4822336c;
    DAT_ram_4ff6dcb4 = iVar2;
    iVar2 = FUN_ram_480734d8(local_29c);
    if (iVar2 != 0) {
      FUN_ram_4ff45158(DAT_ram_4ff6dcc8,local_29c,0x28b);
      iVar1 = DAT_ram_4ff6dcc8;
      fence();
      DAT_ram_4ff47e58 = uStack_18;
      fence();
      uVar3 = FUN_ram_48025ba6();
      *(undefined4 *)(iVar1 + 0xf94) = uVar3;
      *(undefined4 *)(iVar1 + 0xf90) = uStack_18;
      *(undefined4 *)(iVar1 + 0xff8) = 0;
      *(undefined1 *)(iVar1 + 0xffe) = 0;
      *(undefined4 *)(iVar1 + 0xff4) = 0;
      *(undefined2 *)(iVar1 + 0xffc) = 0x100;
      return iVar2;
    }
  }
  return 0;
}


