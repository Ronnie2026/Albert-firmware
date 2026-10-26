/* Firmware entry: 0x4817c8a4 */

int FUN_ram_4817c8a4(uint *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uStack_18;
  undefined1 uStack_17;
  ushort uStack_16;
  undefined1 uStack_14;
  undefined1 uStack_13;
  ushort uStack_12;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar2 = *param_1;
  uVar4 = param_1[1] << 3;
  uStack_16 = (ushort)(uVar4 >> 8) & 0xff | (ushort)((uVar2 >> 0x1d | uVar4) << 8);
  uStack_12 = (ushort)((uVar2 & 0x1fff) >> 5) | (ushort)(uVar2 << 0xb);
  uStack_17 = (undefined1)(uVar4 >> 0x10);
  uVar3 = uVar2 & 0x3f;
  uStack_18 = (undefined1)(uVar4 >> 0x18);
  uStack_14 = (undefined1)((uVar2 << 3) >> 0x18);
  uStack_13 = (undefined1)((uVar2 << 3) >> 0x10);
  if (uVar3 < 0x38) {
    iVar1 = FUN_ram_4817c72e(param_1,&DAT_ram_48239b00,0x38 - uVar3);
  }
  else {
    iVar1 = FUN_ram_4817c72e(param_1,&DAT_ram_48239b00,0x78 - uVar3);
  }
  if ((iVar1 == 0) && (iVar1 = FUN_ram_4817c72e(param_1,&uStack_18), iVar1 == 0)) {
    if (param_1[0x1b] == 1) {
      FUN_ram_4ff45158(param_2,param_1 + 2,0x1c);
      return 0;
    }
    FUN_ram_4ff45158(param_2,param_1 + 2,0x20);
    return 0;
  }
  return iVar1;
}


