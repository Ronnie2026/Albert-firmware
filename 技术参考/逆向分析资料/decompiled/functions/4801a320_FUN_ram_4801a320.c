/* Firmware entry: 0x4801a320 */

undefined4 FUN_ram_4801a320(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar3 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(2,"rpc_utils","W (%lu) %s: Event: SSID %s\n",uVar3,"rpc_utils",
                   *(undefined4 *)(param_2 + 0x10));
  if ((*(int *)(param_2 + 0x10) != 0) && (*(int *)(param_2 + 0xc) != 0)) {
    (**(code **)PTR_PTR_ram_4ff47e40)(param_1);
  }
  if ((*(int *)(param_2 + 0x18) != 0) && (*(int *)(param_2 + 0x14) != 0)) {
    (**(code **)PTR_PTR_ram_4ff47e40)(param_1 + 0x20);
  }
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  iVar4 = *(int *)(param_2 + 0x28);
  *(bool *)(param_1 + 100) = *(int *)(param_2 + 0x20) != 0;
  *(undefined4 *)(param_1 + 0x60) = uVar3;
  if ((iVar4 != 0) && (*(int *)(param_2 + 0x24) != 0)) {
    (**(code **)PTR_PTR_ram_4ff47e40)(param_1 + 0x65);
  }
  *(char *)(param_1 + 0x6b) = (char)*(undefined4 *)(param_2 + 0x2c);
  uVar3 = *(undefined4 *)(param_2 + 0x34);
  iVar4 = *(int *)(param_2 + 0x38);
  *(short *)(param_1 + 0x6c) = (short)*(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x70) = uVar3;
  if (iVar4 != 0) {
    *(char *)(param_1 + 0x74) = (char)*(undefined4 *)(iVar4 + 0xc);
    uVar3 = *(undefined4 *)(iVar4 + 0x14);
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(iVar4 + 0x10);
    *(char *)(param_1 + 0x7c) = (char)uVar3;
  }
  iVar4 = *(int *)(param_2 + 0x3c);
  if (iVar4 != 0) {
    iVar7 = *(int *)(iVar4 + 0x10);
    *(bool *)(param_1 + 0x80) = *(int *)(iVar4 + 0xc) != 0;
    *(bool *)(param_1 + 0x81) = iVar7 != 0;
  }
  uVar6 = *(undefined4 *)(param_2 + 0x40);
  uVar3 = *(undefined4 *)(param_2 + 0x44);
  uVar8 = *(undefined4 *)(param_2 + 0x58);
  *(char *)(param_1 + 0x90) = (char)*(undefined4 *)(param_2 + 0x48);
  uVar5 = *(undefined4 *)(param_2 + 0x4c);
  bVar1 = (byte)((uint)uVar5 >> 8);
  bVar2 = (byte)uVar6;
  *(undefined4 *)(param_1 + 0x88) = uVar3;
  *(undefined4 *)(param_1 + 0x8c) = uVar8;
  *(byte *)(param_1 + 0x92) =
       (byte)((uint)uVar6 >> 8) & 3 | bVar1 & 4 | bVar1 & 8 | bVar1 & 0x10 |
       *(byte *)(param_1 + 0x92) & 0xe0;
  *(byte *)(param_1 + 0x91) = (byte)uVar5 & 0x7f | bVar2 & 0x80;
  *(byte *)(param_1 + 0x82) = bVar2 & 0x3f | *(byte *)(param_1 + 0x82) & 0xc0;
  return 0xffffffff;
}


