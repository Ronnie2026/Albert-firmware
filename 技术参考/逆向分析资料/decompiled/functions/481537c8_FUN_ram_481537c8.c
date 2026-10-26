/* Firmware entry: 0x481537c8 */

void FUN_ram_481537c8(int *param_1)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *param_1;
  if ((*(byte *)(iVar1 + 0x22) & 0x10) != 0) {
    *(byte *)(iVar1 + 0x22) = *(byte *)(iVar1 + 0x22) & 0xef;
    FUN_ram_48151d04(*param_1,0x57);
    iVar1 = *param_1;
  }
  FUN_ram_4814d0be(iVar1);
  FUN_ram_4814d11e(*param_1);
  return;
}


