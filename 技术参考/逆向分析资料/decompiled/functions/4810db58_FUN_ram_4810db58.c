/* Firmware entry: 0x4810db58 */

void FUN_ram_4810db58(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int aiStack_34 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((DAT_ram_4ff6dc54 != '\0') || (fence(), DAT_ram_4ff6df94 != '\0')) {
    FUN_ram_4ff3c2b6(1000);
    return;
  }
  FUN_ram_4802ddc0();
  fence();
  fence();
  FUN_ram_48032fe0(0,2,0,0xffffffff,0,DAT_ram_4ff4b8b8 - DAT_ram_4ff4b8ba & 0x3f,DAT_ram_4ff6dc2f,
                   DAT_ram_4ff6dc48);
  DAT_ram_4ff6a630 = FUN_ram_4ff3d9a8();
  fence();
  FUN_ram_4802de1e();
  iVar1 = FUN_ram_4802c7b6();
  if (iVar1 != 0) {
    DAT_ram_4ff6a630 = FUN_ram_4ff3d9a8();
    fence();
    if (DAT_ram_4ff6a5ac != 0) {
      aiStack_34[0] = 0;
      iVar1 = FUN_ram_4ff3b4aa(DAT_ram_4ff6a5ac,aiStack_34,0);
      if ((iVar1 == 1) && (aiStack_34[0] != 0)) {
        FUN_ram_480e8070(&DAT_ram_4ff60e20);
        FUN_ram_4ff3afa2(*(undefined4 *)(aiStack_34[0] + 0x18c),0,0,0);
      }
    }
  }
  FUN_ram_480e7d58(0,0);
  uVar2 = FUN_ram_4803cdd8(0,0,0);
  FUN_ram_480e7d58(0,0);
  fence();
  fence();
  FUN_ram_48032fe0(0,3,0,0xffffffff,0,DAT_ram_4ff4b8b8 - DAT_ram_4ff4b8ba & 0x3f,uVar2,
                   DAT_ram_4ff6dc48);
  iVar1 = FUN_ram_48025ba6();
  if (DAT_ram_4ff6dc58 == 0) {
LAB_ram_4810dd58:
    DAT_ram_4ff6a630 = FUN_ram_4ff3d9a8();
    fence();
    if (DAT_ram_4ff6a5ac != 0) {
      aiStack_34[0] = 0;
      iVar3 = FUN_ram_4ff3b4aa(DAT_ram_4ff6a5ac,aiStack_34,0);
      if ((iVar3 == 1) && (aiStack_34[0] != 0)) {
        FUN_ram_480e8070(&DAT_ram_4ff60e20);
        FUN_ram_4ff3afa2(*(undefined4 *)(aiStack_34[0] + 0x18c),0,0,0);
      }
    }
    if (DAT_ram_4ff6dc58 != 0) {
      iVar3 = FUN_ram_48031bc6();
      if (iVar3 == 0) {
        fence();
        fence();
        iVar1 = iVar1 - DAT_ram_4ff6dc30;
        if ((DAT_ram_4ff4b8b8 - DAT_ram_4ff4b8ba & 0x3fU) == 0) goto joined_r0x4810de94;
      }
      else {
        iVar1 = iVar1 - DAT_ram_4ff6dc30;
      }
      goto joined_r0x4810ddac;
    }
    iVar1 = iVar1 - DAT_ram_4ff6dc30;
joined_r0x4810de94:
    if (iVar1 < 0) goto LAB_ram_4810dc84;
  }
  else {
    iVar3 = FUN_ram_48031bc6(DAT_ram_4ff6dc58);
    if (iVar3 == 0) {
      fence();
      fence();
      if ((DAT_ram_4ff4b8b8 - DAT_ram_4ff4b8ba & 0x3fU) == 0) goto LAB_ram_4810dd58;
    }
    iVar1 = iVar1 - DAT_ram_4ff6dc30;
joined_r0x4810ddac:
    if ((iVar1 < 0) || (iVar1 < 0x14)) goto LAB_ram_4810dc84;
  }
  FUN_ram_4810cf74();
  iVar1 = FUN_ram_48025ba6();
  DAT_ram_4ff6dc30 = iVar1 + 5;
LAB_ram_4810dc84:
  if (uVar2 < 0x20) {
    DAT_ram_4ff6dc2f = 0;
  }
  else {
    DAT_ram_4ff6dd9c = DAT_ram_4ff6dd9c + 1;
    if ((byte)(DAT_ram_4ff6dc2f + 1U) < 4) {
      DAT_ram_4ff6dc2f = DAT_ram_4ff6dc2f + '\x01';
      FUN_ram_4ff3ef0e();
      return;
    }
    DAT_ram_4ff6dc2f = 0;
    DAT_ram_4ff6a630 = FUN_ram_4ff3d9a8();
    fence();
    if (DAT_ram_4ff6a5ac != 0) {
      aiStack_34[0] = 0;
      iVar1 = FUN_ram_4ff3b4aa(DAT_ram_4ff6a5ac,aiStack_34,0);
      if ((iVar1 == 1) && (aiStack_34[0] != 0)) {
        FUN_ram_480e8070(&DAT_ram_4ff60e20);
        FUN_ram_4ff3afa2(*(undefined4 *)(aiStack_34[0] + 0x18c),0,0,0);
      }
    }
    DAT_ram_4ff6dd98 = DAT_ram_4ff6dd98 + 1;
  }
  FUN_ram_4ff3c2b6(1);
  return;
}


