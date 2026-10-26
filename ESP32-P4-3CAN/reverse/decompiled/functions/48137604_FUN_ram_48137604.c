/* Firmware entry: 0x48137604 */

void FUN_ram_48137604(void)

{
  uint *puVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint *apuStack_34 [3];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4814e864(3);
  if (DAT_ram_4ff6e190 != (code *)0x0) {
    (*DAT_ram_4ff6e190)(DAT_ram_4ff6e18c);
  }
LAB_ram_4813765a:
  while (iVar3 = FUN_ram_48142720(), iVar3 != -1) {
    if ((iVar3 != 0) && (iVar3 = FUN_ram_4814e562(&DAT_ram_4ff6e188,apuStack_34,iVar3), iVar3 != -1)
       ) goto LAB_ram_48137670;
    FUN_ram_481426c2();
  }
  FUN_ram_4814e562(&DAT_ram_4ff6e188,apuStack_34,0);
LAB_ram_48137670:
  puVar1 = apuStack_34[0];
  if (apuStack_34[0] == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/tcpip.c",0x91,"tcpip_thread",
                     "tcpip_thread: invalid message");
  }
  uVar4 = *apuStack_34[0];
  if (uVar4 == 3) {
    (*(code *)apuStack_34[0][1])(apuStack_34[0][2]);
    FUN_ram_48139604(8,puVar1);
    goto LAB_ram_4813765a;
  }
  if (uVar4 < 4) {
    if (uVar4 == 1) {
      puVar5 = (undefined1 *)apuStack_34[0][2];
      uVar2 = (*(code *)apuStack_34[0][1])(puVar5);
      *puVar5 = uVar2;
      FUN_ram_4814e3a4(puVar1[3]);
      goto LAB_ram_4813765a;
    }
    if (uVar4 == 2) {
      iVar3 = (*(code *)apuStack_34[0][3])(apuStack_34[0][1],apuStack_34[0][2]);
      if (iVar3 != 0) {
        FUN_ram_4813ac74(puVar1[1]);
      }
      FUN_ram_48139604(9,puVar1);
      goto LAB_ram_4813765a;
    }
  }
  else if (uVar4 != 4) {
    if (uVar4 != 5) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/tcpip.c",0xd4,"tcpip_thread_handle_msg",
                       "tcpip_thread: invalid message");
    }
    (*(code *)apuStack_34[0][1])(apuStack_34[0][2]);
    FUN_ram_4814e3a4(puVar1[3]);
    goto LAB_ram_4813765a;
  }
  (*(code *)apuStack_34[0][1])(apuStack_34[0][2]);
  goto LAB_ram_4813765a;
}


