/* Firmware entry: 0x481a9566 */

void FUN_ram_481a9566(undefined4 *param_1)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar3 = (uint *)*param_1;
  bVar1 = *(byte *)((int)param_1 + 0x16);
  *puVar3 = *puVar3 & 0xfffffffd | (*(byte *)(param_1 + 6) & 1) << 1;
  *puVar3 = *puVar3 & 0xfffffffb | (bVar1 & 1) << 2;
  uVar2 = param_1[1];
  puVar3[0xf] = puVar3[0xf] & 0xffffff00;
  puVar3[0xe] = puVar3[0xe] & 0xffffff00;
  param_1[1] = uVar2 | 1;
  *puVar3 = *puVar3 & 0xfffffffe;
  return;
}


