/* Firmware entry: 0x48000464 */

uint FUN_ram_48000464(undefined4 *param_1,undefined4 param_2,uint param_3,code *param_4)

{
  byte bVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  code *pcVar10;
  undefined1 *puVar11;
  uint uVar12;
  int iStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iStack_34 = 0;
  uVar4 = FUN_ram_48000386();
  pcVar2 = DAT_ram_4ff6d938;
  if ((param_3 != 0) && (param_3 < uVar4)) {
    uVar4 = param_3;
  }
  puVar11 = (undefined1 *)*param_1;
  iVar7 = iStack_34;
  if (iStack_34 < (int)uVar4) {
    if (puVar11 != (undefined1 *)0x0) {
      do {
        while( true ) {
          bVar1 = puVar11[1];
          uVar8 = (uint)*(ushort *)(puVar11 + 2) + (uint)bVar1;
          if (0x100 < uVar8) {
            if (DAT_ram_4ff47dac != 0) {
              uVar5 = FUN_ram_4ff44d14();
              ets_printf("E (%lu) %s: Range of data does not match the coding scheme\n",uVar5,
                         "efuse");
              iVar7 = iStack_34;
            }
            uVar8 = 0x1604;
            pcVar10 = (code *)0x1000;
            goto joined_r0x48000574;
          }
          iVar9 = uVar8 - 1;
          uVar12 = (uint)(bVar1 >> 5);
          uVar3 = (int)((iVar9 >> 0x1f & 0x1fU) + iVar9) >> 5;
          uVar8 = bVar1 & 0x1f;
          if ((int)uVar3 < (int)uVar12) break;
          while( true ) {
            iVar6 = iVar9 % 0x20;
            if (uVar3 != uVar12) {
              iVar6 = 0x1f;
            }
            iVar6 = (iVar6 - uVar8) + 1;
            if ((int)uVar4 < iVar6 + iVar7) {
              iVar6 = uVar4 - iVar7;
            }
            uVar8 = (*param_4)(uVar12,*puVar11,uVar8,iVar6,param_2,&iStack_34);
            pcVar10 = DAT_ram_4ff6d938;
            iVar7 = iStack_34;
            if (uVar8 != 0) goto joined_r0x48000574;
            if ((int)uVar4 <= iStack_34) goto LAB_ram_48000542;
            uVar12 = uVar12 + 1;
            if (uVar12 == uVar3 + 1) break;
            uVar8 = 0;
          }
          puVar11 = puVar11 + 4;
        }
        puVar11 = puVar11 + 4;
      } while (iVar7 < (int)uVar4);
      goto LAB_ram_48000542;
    }
    if ((param_4 != (code *)&LAB_ram_48000686) && (param_4 != FUN_ram_480003a8)) {
      return 0;
    }
  }
  else {
LAB_ram_48000542:
    if (param_4 != (code *)&LAB_ram_48000686) {
      uVar8 = 0;
      pcVar10 = FUN_ram_480003a8;
      if (param_4 != FUN_ram_480003a8) goto joined_r0x48000574;
    }
  }
  uVar8 = 0x1606;
  pcVar10 = (code *)0x1000;
  if (pcVar2 == DAT_ram_4ff6d938) {
    pcVar10 = (code *)-((uint)pcVar2 & 1);
    uVar8 = (uint)pcVar10 & 0x1606;
  }
joined_r0x48000574:
  if (iVar7 <= (int)uVar4) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("esp_efuse_utility.c",0x54,"esp_efuse_utility_process","bits_counter <= req_size"
                   ,iVar7,pcVar10);
}


