/* Firmware entry: 0x4ff3fe68 */

uint FUN_ram_4ff3fe68(uint *param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("event_groups.c",0x231,"xEventGroupSetBits","xEventGroup");
  }
  if (0xffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("event_groups.c",0x232,"xEventGroupSetBits",
                     "( uxBitsToSet & 0xff000000UL ) == 0");
  }
  FUN_ram_4ff3ec14(param_1 + 8,0xffffffff);
  FUN_ram_4ff3e3a2();
  puVar6 = param_1 + 3;
  param_2 = param_2 | *param_1;
  *param_1 = param_2;
  if (puVar6 != (uint *)param_1[4]) {
    uVar5 = 0;
    puVar1 = (uint *)param_1[4];
    do {
      while( true ) {
        puVar2 = (uint *)puVar1[1];
        uVar4 = *puVar1;
        uVar3 = uVar4 & 0xffffff;
        if ((int)(uVar4 << 5) < 0) break;
        if ((uVar3 & param_2) != 0) {
LAB_ram_4ff3fed2:
          if ((int)(uVar4 << 7) < 0) {
            uVar5 = uVar5 | uVar3;
          }
          FUN_ram_4ff3d3b0(puVar1,param_2 | 0x2000000);
          param_2 = *param_1;
        }
        puVar1 = puVar2;
        if (puVar6 == puVar2) goto LAB_ram_4ff3feee;
      }
      if (uVar3 == (uVar3 & param_2)) goto LAB_ram_4ff3fed2;
      puVar1 = puVar2;
    } while (puVar6 != puVar2);
LAB_ram_4ff3feee:
    param_2 = param_2 & ~uVar5;
  }
  *param_1 = param_2;
  FUN_ram_4ff3e3ac();
  FUN_ram_4ff3ee10(param_1 + 8);
  return *param_1;
}


