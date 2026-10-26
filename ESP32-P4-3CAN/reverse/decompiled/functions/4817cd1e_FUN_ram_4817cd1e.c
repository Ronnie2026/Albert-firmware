/* Firmware entry: 0x4817cd1e */

void FUN_ram_4817cd1e(int param_1,byte *param_2,undefined1 *param_3)

{
  bool bVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar5 = (param_2[0xf] & 0xf) * 8 + param_1;
  iVar7 = (uint)(param_2[0xf] >> 4) * 8 + param_1;
  uVar6 = *(uint *)(iVar7 + 0x30) ^ (*(uint *)(iVar5 + 0x34) << 0x1c | *(uint *)(iVar5 + 0x30) >> 4)
  ;
  uVar10 = *(uint *)(iVar7 + 0x34) ^
           (*(uint *)(iVar5 + 0xb0) << 0x1c | *(uint *)(iVar5 + 0x34) >> 4);
  uVar2 = *(uint *)(iVar7 + 0xb0) ^ (*(uint *)(iVar5 + 0xb0) >> 4 | *(uint *)(iVar5 + 0xb4) << 0x1c)
  ;
  uVar9 = *(uint *)(&DAT_ram_48239bc0 + (*(uint *)(iVar5 + 0x30) & 0xf) * 4) ^
          *(uint *)(iVar7 + 0xb4) ^ *(uint *)(iVar5 + 0xb4) >> 4;
  pbVar3 = param_2 + 0xe;
  do {
    iVar7 = (*pbVar3 & 0xf) * 8 + param_1;
    uVar8 = *(uint *)(iVar7 + 0x30) ^ (uVar10 << 0x1c | uVar6 >> 4);
    iVar5 = (uint)(*pbVar3 >> 4) * 8 + param_1;
    uVar6 = *(uint *)(&DAT_ram_48239bc0 + (uVar6 & 0xf) * 4) ^ *(uint *)(iVar7 + 0xb4) ^ uVar9 >> 4;
    uVar4 = *(uint *)(iVar7 + 0xb0) ^ (uVar9 << 0x1c | uVar2 >> 4);
    uVar10 = *(uint *)(iVar7 + 0x34) ^ (uVar2 << 0x1c | uVar10 >> 4);
    uVar9 = *(uint *)(&DAT_ram_48239bc0 + (uVar8 & 0xf) * 4) ^ *(uint *)(iVar5 + 0xb4) ^ uVar6 >> 4;
    uVar2 = *(uint *)(iVar5 + 0xb0) ^ (uVar6 << 0x1c | uVar4 >> 4);
    uVar6 = *(uint *)(iVar5 + 0x30) ^ (uVar8 >> 4 | uVar10 << 0x1c);
    uVar10 = *(uint *)(iVar5 + 0x34) ^ (uVar4 << 0x1c | uVar10 >> 4);
    bVar1 = param_2 != pbVar3;
    pbVar3 = pbVar3 + -1;
  } while (bVar1);
  param_3[1] = (char)(uVar9 >> 0x10);
  *param_3 = (char)(uVar9 >> 0x18);
  param_3[3] = (char)uVar9;
  param_3[7] = (char)uVar2;
  param_3[0xb] = (char)uVar10;
  param_3[0xf] = (char)uVar6;
  param_3[2] = (char)(uVar9 >> 8);
  param_3[4] = (char)(uVar2 >> 0x18);
  param_3[5] = (char)(uVar2 >> 0x10);
  param_3[6] = (char)(uVar2 >> 8);
  param_3[8] = (char)(uVar10 >> 0x18);
  param_3[9] = (char)(uVar10 >> 0x10);
  param_3[10] = (char)(uVar10 >> 8);
  param_3[0xc] = (char)(uVar6 >> 0x18);
  param_3[0xd] = (char)(uVar6 >> 0x10);
  param_3[0xe] = (char)(uVar6 >> 8);
  return;
}


