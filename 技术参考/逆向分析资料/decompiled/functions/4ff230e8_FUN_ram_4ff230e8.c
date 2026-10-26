/* Firmware entry: 0x4ff230e8 */

byte * FUN_ram_4ff230e8(byte *param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(param_2,0xffffffff);
  uVar3 = *(uint *)(param_2 + 0xc);
  uVar1 = *(uint *)(param_2 + 8);
  uVar7 = *(undefined4 *)(param_2 + 0x10);
  uVar6 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x18);
  uVar4 = *(undefined4 *)(param_2 + 0x1c);
  FUN_ram_4ff3ee10(param_2);
  param_1[3] = (byte)(uVar3 >> 1) & 1;
  param_1[6] = (byte)(uVar3 >> 7) & 1;
  param_1[4] = (byte)(uVar3 >> 2) & 1;
  param_1[5] = (byte)(uVar3 >> 3) & 1;
  param_1[0x14] = (byte)(uVar3 >> 4) & 1;
  param_1[0x15] = (byte)(uVar3 >> 5) & 1;
  param_1[0xe] = (byte)(uVar3 >> 6) & 1;
  *param_1 = (byte)uVar1 & 1;
  param_1[1] = (byte)(uVar1 >> 1) & 1;
  param_1[7] = (byte)(uVar1 >> 2) & 1;
  param_1[8] = (byte)(uVar1 >> 0xe) & 1;
  param_1[0x17] = (byte)(uVar1 >> 8) & 7;
  param_1[0x18] = (byte)(uVar1 >> 0xb) & 7;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[2] = (byte)uVar3 & 1;
  param_1[9] = (byte)(uVar1 >> 3) & 1;
  param_1[10] = (byte)(uVar1 >> 4) & 1;
  param_1[0xb] = (byte)(uVar1 >> 5) & 1;
  param_1[0xc] = (byte)(uVar1 >> 6) & 1;
  param_1[0xd] = (byte)(uVar1 >> 7) & 1;
  param_1[0x16] = (byte)(uVar1 >> 0xf) & 1;
  param_1[0x19] = (byte)(uVar1 >> 0x10);
  bVar2 = 5;
  if ((uVar1 >> 0x18 != 0) && (bVar2 = (byte)(uVar1 >> 0x18), 100 < uVar1 >> 0x18)) {
    bVar2 = 100;
  }
  param_1[0x1a] = bVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar7;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x10) = uVar5;
  *(undefined4 *)(param_1 + 0x24) = uVar4;
  return param_1;
}


