/* Firmware entry: 0x48154be6 */

void FUN_ram_48154be6(undefined4 *param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pbVar1 = (byte *)*param_1;
  uVar2 = FUN_ram_48155c22();
  pbVar1[0x4c] = 0;
  *(undefined4 *)(pbVar1 + 100) = *(undefined4 *)(pbVar1 + 0x40);
  *(undefined4 *)(pbVar1 + 0x48) = uVar2;
  *(undefined4 *)(pbVar1 + 0x6c) = uVar2;
  *(undefined4 *)(pbVar1 + 0x68) = *(undefined4 *)(pbVar1 + 0x44);
  *(undefined4 *)(pbVar1 + 0x70) = *(undefined4 *)(pbVar1 + 0x4c);
  *(undefined4 *)(pbVar1 + 0x74) = *(undefined4 *)(pbVar1 + 0x50);
  *(undefined4 *)(pbVar1 + 0x78) = *(undefined4 *)(pbVar1 + 0x54);
  *(undefined4 *)(pbVar1 + 0x7c) = *(undefined4 *)(pbVar1 + 0x58);
  *(undefined4 *)(pbVar1 + 0x80) = *(undefined4 *)(pbVar1 + 0x5c);
  *(undefined4 *)(pbVar1 + 0x84) = *(undefined4 *)(pbVar1 + 0x60);
  pbVar1[0x65] = (byte)((uint)*(undefined4 *)(pbVar1 + 0x40) >> 8) & 0xfc;
  if ((*pbVar1 & 0x10) != 0) {
    *(ushort *)(pbVar1 + 0x88) = *(ushort *)(pbVar1 + 0x88) & 0xfdff;
  }
  pbVar1[0xd0] = 0xdc;
  pbVar1[0xd1] = 5;
  return;
}


