/* Firmware entry: 0x48143b5c */

void FUN_ram_48143b5c(int param_1,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 uStack_28;
  undefined1 uStack_24;
  
  cVar1 = DAT_ram_4ff6cf13;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x4c) = DAT_ram_4ff6cf28;
  }
  cVar1 = DAT_ram_4ff6cf14._1_1_;
  uVar5 = DAT_ram_4ff6cf2c;
  if ((char)DAT_ram_4ff6cf14 == '\0') {
    uVar5 = *(uint *)(param_1 + 0x4c) >> 1;
  }
  *(uint *)(param_1 + 0x50) = uVar5;
  uVar5 = DAT_ram_4ff6cf30;
  if (cVar1 == '\0') {
    uVar5 = (uint)(*(int *)(param_1 + 0x4c) * 7) >> 3;
  }
  *(uint *)(param_1 + 0x54) = uVar5;
  cVar1 = DAT_ram_4ff6cf14._2_1_;
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x10);
  if (cVar1 == '\0') {
    *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xfe;
  }
  else {
    uVar4 = FUN_ram_48137fd6(DAT_ram_4ff6cf34);
    *(undefined4 *)(param_1 + 0x44) = uVar4;
    *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) | 1;
  }
  if (DAT_ram_4ff6cf14._3_1_ != '\0') {
    uVar4 = FUN_ram_48137fd6(DAT_ram_4ff6cf38);
    *(undefined4 *)(param_1 + 0x48) = uVar4;
  }
  puVar2 = &DAT_ram_4ff6cf1c;
  uVar5 = 0;
  cVar1 = (char)DAT_ram_4ff6cf18;
  for (uVar3 = 1; (cVar1 != '\0' && (uVar3 != 3)); uVar3 = uVar3 + 1) {
    uStack_38 = FUN_ram_48137fd6(puVar2[8]);
    uStack_24 = 0;
    uStack_2c = 0;
    uStack_30 = 0;
    uStack_34 = 0;
    uStack_28 = 0;
    FUN_ram_48138d9c(uVar5 & 0xff,&uStack_38);
    cVar1 = *(char *)((int)&DAT_ram_4ff6cf18 + uVar3);
    puVar2 = puVar2 + 1;
    uVar5 = uVar3;
  }
  return;
}


