/* Firmware entry: 0x4817b13a */

void FUN_ram_4817b13a(undefined1 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = param_2[1];
  iVar2 = param_2[2];
  uVar3 = 0x87 >> ((uint)(*(byte *)((int)param_2 + 0xf) >> 7) * -8 + 8 & 0x1f);
  iVar4 = param_2[3] << 1;
  uVar6 = (int)uVar3 >> 0x1f ^ ((uint)(*(byte *)((int)param_2 + 3) >> 7) | iVar1 << 1);
  uVar3 = uVar3 ^ *param_2 << 1;
  iVar5 = iVar2 << 1;
  param_1[7] = (char)(uVar6 >> 0x18);
  param_1[6] = (char)(uVar6 >> 0x10);
  param_1[4] = (char)uVar6;
  *param_1 = (char)uVar3;
  param_1[0xc] = (byte)((uint)iVar2 >> 0x1f) | (byte)iVar4;
  param_1[8] = (byte)((uint)iVar1 >> 0x1f) | (byte)iVar5;
  param_1[5] = (char)(uVar6 >> 8);
  param_1[3] = (char)(uVar3 >> 0x18);
  param_1[2] = (char)(uVar3 >> 0x10);
  param_1[1] = (char)(uVar3 >> 8);
  param_1[0xf] = (char)((uint)iVar4 >> 0x18);
  param_1[0xe] = (char)((uint)iVar4 >> 0x10);
  param_1[0xd] = (char)((uint)iVar4 >> 8);
  param_1[0xb] = (char)((uint)iVar5 >> 0x18);
  param_1[10] = (char)((uint)iVar5 >> 0x10);
  param_1[9] = (char)((uint)iVar5 >> 8);
  return;
}


