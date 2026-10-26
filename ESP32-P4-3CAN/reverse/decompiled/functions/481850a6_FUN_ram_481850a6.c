/* Firmware entry: 0x481850a6 */

undefined4 FUN_ram_481850a6(int param_1,undefined4 *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return 0xffffffd2;
  }
  iVar2 = *(int *)(param_1 + 4);
  puVar3 = &DAT_ram_481df37c;
  puVar1 = &UNK_ram_4823a3ac;
  while ((*(int *)(puVar1 + 4) != iVar2 ||
         (iVar4 = FUN_ram_4ff4511a(puVar3,*(undefined4 *)(param_1 + 8),iVar2), iVar4 != 0))) {
    puVar3 = *(undefined **)(puVar1 + 0x14);
    puVar1 = puVar1 + 0x14;
    if (puVar3 == (undefined *)0x0) {
      return 0xffffffd2;
    }
  }
  *param_2 = *(undefined4 *)(puVar1 + 0x10);
  return 0;
}


