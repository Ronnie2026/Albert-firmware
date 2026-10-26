/* Firmware entry: 0x4ff3e638 */

void FUN_ram_4ff3e638(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  piVar2 = &DAT_ram_4ff6da00;
  cVar1 = '\0';
  while( true ) {
    uStack_2c = CONCAT31(uStack_2c._1_3_,cVar1 + '0');
    uStack_30 = 0x454c4449;
    uStack_3c = 0;
    uStack_38 = 0;
    FUN_ram_4ff3f2e6(&uStack_3c,&uStack_38,&uStack_34);
    iVar3 = FUN_ram_4ff3e516(&LAB_ram_4ff3bf76,&uStack_30,uStack_34,0,0,uStack_38,uStack_3c,cVar1);
    *piVar2 = iVar3;
    if (cVar1 == '\x01') break;
    piVar2 = piVar2 + 1;
    cVar1 = '\x01';
    if (iVar3 == 0) {
      return;
    }
  }
  if (iVar3 == 0) {
    return;
  }
  iVar3 = FUN_ram_4ff4095a();
  if (iVar3 != 1) {
    if (iVar3 != -1) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("tasks.c",0x9a3,"vTaskStartScheduler","xReturn != ( -1 )");
  }
  FUN_ram_4ff3ebfe();
  FUN_ram_4ff3ec14(&DAT_ram_4ff47df4,0xffffffff);
  DAT_ram_4ff6da08 = 0xffffffff;
  DAT_ram_4ff6da28 = 0;
  DAT_ram_4ff6da20 = iVar3;
  FUN_ram_4ff3ee10(&DAT_ram_4ff47df4);
  FUN_ram_4ff2a704((&DAT_ram_4ff6da3c)[mhartid],(&DAT_ram_4ff6da3c)[mhartid] + 0x34,
                   *(undefined4 *)((&DAT_ram_4ff6da3c)[mhartid] + 0x2c),1,DAT_ram_4ff6da28);
  FUN_ram_4ff3ef98();
  return;
}


