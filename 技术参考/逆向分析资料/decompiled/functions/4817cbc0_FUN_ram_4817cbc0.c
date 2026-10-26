/* Firmware entry: 0x4817cbc0 */

int FUN_ram_4817cbc0(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 local_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  byte bStack_1d;
  undefined1 uStack_1c;
  undefined1 uStack_1b;
  ushort uStack_1a;
  undefined1 uStack_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  byte bStack_15;
  undefined1 uStack_14;
  undefined1 uStack_13;
  ushort uStack_12;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = *param_1;
  uVar5 = param_1[2] << 3;
  iVar4 = param_1[1] << 3;
  iVar3 = param_1[3] << 3;
  bStack_15 = (byte)(uVar1 >> 0x1d) | (byte)iVar4;
  bStack_1d = (byte)(param_1[2] >> 0x1d) | (byte)iVar3;
  uStack_1a = (ushort)(uVar5 >> 8) & 0xff | (ushort)((uVar5 | param_1[1] >> 0x1d) << 8);
  uStack_12 = (ushort)((uVar1 & 0x1fff) >> 5) | (ushort)(uVar1 << 0xb);
  uStack_14 = (undefined1)((uVar1 << 3) >> 0x18);
  uVar2 = uVar1 & 0x7f;
  local_20 = (undefined1)((uint)iVar3 >> 0x18);
  uStack_1f = (undefined1)((uint)iVar3 >> 0x10);
  uStack_1e = (undefined1)((uint)iVar3 >> 8);
  uStack_18 = (undefined1)((uint)iVar4 >> 0x18);
  uStack_17 = (undefined1)((uint)iVar4 >> 0x10);
  uStack_16 = (undefined1)((uint)iVar4 >> 8);
  uStack_1c = (undefined1)(uVar5 >> 0x18);
  uStack_1b = (undefined1)(uVar5 >> 0x10);
  uStack_13 = (undefined1)((uVar1 << 3) >> 0x10);
  if (uVar2 < 0x70) {
    iVar3 = FUN_ram_4817ca46(param_1,&DAT_ram_48239b40,0x70 - uVar2);
  }
  else {
    iVar3 = FUN_ram_4817ca46(param_1,&DAT_ram_48239b40,0xf0 - uVar2);
  }
  if ((iVar3 == 0) && (iVar3 = FUN_ram_4817ca46(param_1,&local_20,0x10), iVar3 == 0)) {
    if (param_1[0x35] == 3) {
      FUN_ram_4ff45158(param_2,param_1 + 4,0x30);
      return 0;
    }
    FUN_ram_4ff45158(param_2,param_1 + 4,0x40);
    return 0;
  }
  return iVar3;
}


