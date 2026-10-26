/* Firmware entry: 0x48030e48 */

void FUN_ram_48030e48(undefined1 *param_1,undefined1 *param_2,undefined1 param_3,undefined1 param_4,
                     undefined1 param_5)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  bVar1 = param_1[8];
  if (bVar1 < 8) {
    uVar2 = *param_2;
    iVar3 = (uint)bVar1 * 7;
    param_1[8] = bVar1 + 1;
    param_1[iVar3 + 10] = param_3;
    param_1[iVar3 + 0xb] = 0;
    param_1[iVar3 + 0xc] = uVar2;
    param_1[iVar3 + 0xe] = 0;
    param_1[iVar3 + 0xf] = param_4;
    param_1[iVar3 + 0x10] = param_5;
    param_1[iVar3 + 0xd] = 0xff;
  }
  *param_1 = 0;
  return;
}


