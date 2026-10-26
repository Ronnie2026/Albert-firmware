/* Firmware entry: 0x48162526 */

undefined4 FUN_ram_48162526(undefined4 *param_1,undefined2 *param_2)

{
  bool bVar1;
  ushort uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 auStack_60 [12];
  uint uStack_30;
  uint uStack_2c;
  undefined4 local_24 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  memset(auStack_60,0,0x40);
  puVar3 = local_24;
  do {
    uVar4 = *param_1;
    param_1 = param_1 + 1;
    uVar4 = __bswapsi2(uVar4);
    *puVar3 = uVar4;
    bVar1 = auStack_60 != puVar3;
    puVar3 = puVar3 + -1;
  } while (bVar1);
  uVar2 = (ushort)((uint)auStack_60[9] >> 0x10);
  uVar4 = *(undefined4 *)(&DAT_ram_48237d9c + (uStack_2c >> 10 & 0x3c));
  param_2[2] = uVar2 >> 7 & 4 | (ushort)((uint)local_24[0] >> 0x1e) | uVar2 >> 5 & 8 |
               (ushort)(uStack_30 >> 0xe) & 0x3f0 | (ushort)((uStack_30 >> 0x10 & 3) << 10) |
               param_2[2] & 0xf000;
  param_2[1] = (ushort)(byte)(uStack_30 >> 0x18) | (ushort)(uStack_2c << 8);
  *param_2 = (short)uVar4;
  return 0;
}


