/* Firmware entry: 0x481852a4 */

undefined4 FUN_ram_481852a4(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar2 = &UNK_ram_4823a1b8;
  puVar1 = &DAT_ram_481df39c;
  do {
    if (*(int *)(puVar2 + 0x10) == param_1) {
      uVar3 = *(undefined4 *)(puVar2 + 4);
      *param_2 = puVar1;
      *param_3 = uVar3;
      return 0;
    }
    puVar1 = *(undefined **)(puVar2 + 0x14);
    puVar2 = puVar2 + 0x14;
  } while (puVar1 != (undefined *)0x0);
  return 0xffffffd2;
}


