/* Firmware entry: 0x48160cc2 */

undefined4 FUN_ram_48160cc2(uint param_1,uint *param_2,uint *param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (1 < param_1) {
    if (param_1 - 2 < 3) {
      uVar3 = param_2[3];
      *(char *)(param_3 + 2) = (char)uVar3;
      uVar2 = param_2[2];
      *(char *)(param_3 + 3) = (char)uVar2;
      *(char *)((int)param_3 + 10) = (char)(uVar2 >> 0x10);
      *(char *)((int)param_3 + 9) = (char)(uVar2 >> 0x18);
      *(char *)((int)param_3 + 0xb) = (char)(uVar2 >> 8);
      uVar2 = param_2[1];
      *(undefined1 *)((int)param_3 + 0xf) = 0;
      *(char *)((int)param_3 + 0xd) = (char)(uVar2 >> 0x18);
      *(char *)((int)param_3 + 0xe) = (char)(uVar2 >> 0x10);
      uVar1 = *(ushort *)((int)param_2 + 2);
      param_3[4] = 0;
      param_3[5] = (uint)uVar1 | (uVar2 & 0xff) << 0x10;
      param_3[6] = 0;
      param_3[1] = uVar3 >> 8 & 0xffff;
      *param_3 = uVar3 >> 0x18;
    }
    return 0;
  }
  uVar2 = param_2[3];
  param_3[1] = 0;
  *(char *)(param_3 + 2) = (char)uVar2;
  uVar3 = param_2[2];
  *param_3 = uVar2 >> 8;
  *(char *)((int)param_3 + 9) = (char)(uVar3 >> 0x18);
  *(char *)((int)param_3 + 10) = (char)(uVar3 >> 0x10);
  *(char *)((int)param_3 + 0xb) = (char)(uVar3 >> 8);
  *(char *)(param_3 + 3) = (char)uVar3;
  uVar3 = param_2[1];
  *(undefined1 *)((int)param_3 + 0xf) = 0;
  *(char *)((int)param_3 + 0xe) = (char)(uVar3 >> 0x10);
  *(char *)((int)param_3 + 0xd) = (char)(uVar3 >> 0x18);
  uVar2 = *param_2;
  param_3[6] = uVar2 >> 8 & 0xff;
  param_3[5] = uVar2 >> 0x10 | (uVar3 & 0xff) << 0x10;
  param_3[4] = uVar3 >> 8 & 0xff;
  return 0;
}


