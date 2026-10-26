/* Firmware entry: 0x4813bf22 */

short FUN_ram_4813bf22(void)

{
  short sVar1;
  undefined **ppuVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  sVar1 = 0x4000;
LAB_ram_4813bf3c:
  DAT_ram_4ff47f74 = DAT_ram_4ff47f74 + 1;
  ppuVar2 = &PTR_DAT_ram_4ff6e1c8_ram_48236b38;
  if (DAT_ram_4ff47f74 == -1) {
    DAT_ram_4ff47f74 = -0x4000;
  }
  do {
    for (iVar3 = *(int *)*ppuVar2; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x34)) {
      if (*(short *)(iVar3 + 0x42) == DAT_ram_4ff47f74) {
        sVar1 = sVar1 + -1;
        if (sVar1 == 0) {
          return 0;
        }
        goto LAB_ram_4813bf3c;
      }
    }
    ppuVar2 = ppuVar2 + 1;
    if (ppuVar2 == (undefined **)&UNK_ram_48236b48) {
      return DAT_ram_4ff47f74;
    }
  } while( true );
}


