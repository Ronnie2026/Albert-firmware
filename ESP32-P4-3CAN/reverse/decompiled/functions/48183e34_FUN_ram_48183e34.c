/* Firmware entry: 0x48183e34 */

void FUN_ram_48183e34(undefined1 *param_1,byte *param_2,int param_3)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  uint *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  undefined8 uVar9;
  uint local_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  byte abStack_10 [8];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar5 = (uint *)((param_2[0xf] & 0xf) * 0x10 + param_3);
  pbVar4 = (byte *)(param_3 + (param_2[0xf] & 0xf0));
  uStack_18 = puVar5[3] << 0x1c | puVar5[2] >> 4;
  uStack_14 = *puVar5 << 0x1c | puVar5[3] >> 4;
  local_20 = puVar5[1] << 0x1c | *puVar5 >> 4;
  uStack_1c = (uint)*(ushort *)(&DAT_ram_4823a0d8 + (puVar5[2] & 0xf) * 2) << 0x10 ^ puVar5[1] >> 4;
  puVar5 = &local_20;
  do {
    bVar2 = *pbVar4;
    pbVar6 = (byte *)((int)puVar5 + 1);
    pbVar4 = pbVar4 + 1;
    *(byte *)puVar5 = *(byte *)puVar5 ^ bVar2;
    puVar5 = (uint *)pbVar6;
  } while (abStack_10 != pbVar6);
  pbVar4 = param_2 + 0xe;
  do {
    bVar2 = *pbVar4;
    uVar8 = local_20 << 0x1c;
    local_20 = uStack_1c << 0x1c | local_20 >> 4;
    uStack_1c = (uint)*(ushort *)(&DAT_ram_4823a0d8 + (uStack_18 & 0xf) * 2) << 0x10 ^
                uStack_1c >> 4;
    uStack_18 = uStack_14 << 0x1c | uStack_18 >> 4;
    uStack_14 = uVar8 | uStack_14 >> 4;
    pbVar6 = (byte *)((bVar2 & 0xf) * 0x10 + param_3);
    puVar5 = &local_20;
    do {
      bVar3 = *pbVar6;
      pbVar7 = (byte *)((int)puVar5 + 1);
      pbVar6 = pbVar6 + 1;
      *(byte *)puVar5 = *(byte *)puVar5 ^ bVar3;
      puVar5 = (uint *)pbVar7;
    } while (abStack_10 != pbVar7);
    uVar8 = local_20 << 0x1c;
    local_20 = uStack_1c << 0x1c | local_20 >> 4;
    pbVar6 = (byte *)((uint)(bVar2 >> 4) * 0x10 + param_3);
    uStack_1c = (uint)*(ushort *)(&DAT_ram_4823a0d8 + (uStack_18 & 0xf) * 2) << 0x10 ^
                uStack_1c >> 4;
    uStack_18 = uStack_14 << 0x1c | uStack_18 >> 4;
    uStack_14 = uVar8 | uStack_14 >> 4;
    puVar5 = &local_20;
    do {
      bVar2 = *pbVar6;
      pbVar7 = (byte *)((int)puVar5 + 1);
      pbVar6 = pbVar6 + 1;
      *(byte *)puVar5 = *(byte *)puVar5 ^ bVar2;
      puVar5 = (uint *)pbVar7;
    } while (abStack_10 != pbVar7);
    bVar1 = param_2 != pbVar4;
    pbVar4 = pbVar4 + -1;
  } while (bVar1);
  uVar9 = __bswapdi2(local_20,uStack_1c);
  *param_1 = (char)uVar9;
  param_1[4] = (char)((ulonglong)uVar9 >> 0x20);
  param_1[3] = (char)((ulonglong)uVar9 >> 0x18);
  param_1[5] = (char)((ulonglong)uVar9 >> 0x28);
  param_1[6] = (char)((ulonglong)uVar9 >> 0x30);
  param_1[7] = (char)((ulonglong)uVar9 >> 0x38);
  param_1[1] = (char)((ulonglong)uVar9 >> 8);
  param_1[2] = (char)((ulonglong)uVar9 >> 0x10);
  uVar9 = __bswapdi2(uStack_18,uStack_14);
  param_1[8] = (char)uVar9;
  param_1[0xc] = (char)((ulonglong)uVar9 >> 0x20);
  param_1[9] = (char)((ulonglong)uVar9 >> 8);
  param_1[10] = (char)((ulonglong)uVar9 >> 0x10);
  param_1[0xb] = (char)((ulonglong)uVar9 >> 0x18);
  param_1[0xd] = (char)((ulonglong)uVar9 >> 0x28);
  param_1[0xe] = (char)((ulonglong)uVar9 >> 0x30);
  param_1[0xf] = (char)((ulonglong)uVar9 >> 0x38);
  return;
}


