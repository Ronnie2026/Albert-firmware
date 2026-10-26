/* Firmware entry: 0x48151b80 */

void FUN_ram_48151b80(int param_1,char *param_2)

{
  ushort *puVar1;
  undefined **ppuVar2;
  char *extraout_a1;
  ushort uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (PTR_DAT_ram_482376a0_ram_482370a8 != (undefined *)0x0) {
    ppuVar2 = &PTR_DAT_ram_482375e8_ram_482370ac;
    puVar1 = (ushort *)PTR_DAT_ram_482376a0_ram_482370a8;
    do {
      uVar3 = *puVar1;
      if (uVar3 != 0xc021) {
        if (*(code **)(puVar1 + 10) != (code *)0x0) {
          (**(code **)(puVar1 + 10))(param_1,param_2);
          uVar3 = *puVar1;
        }
        param_2 = "LCP down";
        if ((uVar3 < 0xc000) && (*(code **)(puVar1 + 0xe) != (code *)0x0)) {
          (**(code **)(puVar1 + 0xe))(param_1);
          param_2 = extraout_a1;
        }
      }
      puVar1 = (ushort *)*ppuVar2;
      ppuVar2 = ppuVar2 + 1;
    } while (puVar1 != (ushort *)0x0);
  }
  *(undefined2 *)(param_1 + 0xd4) = 0;
  return;
}


