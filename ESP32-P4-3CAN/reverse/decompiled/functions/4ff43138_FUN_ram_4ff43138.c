/* Firmware entry: 0x4ff43138 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4ff43138(int *param_1,byte *param_2,uint param_3,uint *param_4)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint *puVar4;
  int iVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar4 = (uint *)*param_1;
  if (puVar4 == (uint *)0x50121000) {
    iVar5 = 0x10;
    uVar2 = _DAT_ram_5012101c >> 0x13 & 0x1f;
  }
  else {
    iVar5 = 0x80;
    uVar2 = puVar4[7] >> 0x10 & 0xff;
  }
  uVar2 = iVar5 - uVar2 & 0xffff;
  if (param_3 < uVar2) {
    uVar2 = param_3;
  }
  *param_4 = uVar2;
  pbVar3 = param_2 + uVar2;
  if (uVar2 != 0) {
    do {
      bVar1 = *param_2;
      param_2 = param_2 + 1;
      *puVar4 = (uint)bVar1;
    } while (param_2 != pbVar3);
  }
  return;
}


