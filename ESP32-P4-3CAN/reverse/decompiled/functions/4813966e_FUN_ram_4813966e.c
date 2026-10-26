/* Firmware entry: 0x4813966e */

void FUN_ram_4813966e(int param_1)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  int *piVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/netif.c",0x4f9,"netif_poll",
                     "netif_poll: invalid netif");
  }
  FUN_ram_4814e762();
  piVar1 = *(int **)(param_1 + 0xfc);
  do {
    if (piVar1 == (int *)0x0) {
      FUN_ram_4814e79e();
      return;
    }
    uVar2 = 1;
    piVar4 = piVar1;
    if (*(short *)((int)piVar1 + 10) != (short)piVar1[2]) {
      do {
        piVar4 = (int *)*piVar4;
        if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/netif.c",0x505,"netif_poll",
                           "bogus pbuf: len != tot_len but next == NULL!");
        }
        uVar2 = uVar2 + 1 & 0xff;
      } while (*(short *)((int)piVar4 + 10) != (short)piVar4[2]);
      if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/netif.c",0x50d,"netif_poll",
                         "netif->loop_cnt_current underflow");
      }
    }
    *(ushort *)(param_1 + 0x104) = *(short *)(param_1 + 0x104) - uVar2;
    if (*(int **)(param_1 + 0x100) == piVar4) {
      *(undefined4 *)(param_1 + 0x100) = 0;
      *(undefined4 *)(param_1 + 0xfc) = 0;
    }
    else {
      iVar3 = *piVar4;
      *(int *)(param_1 + 0xfc) = iVar3;
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/netif.c",0x519,"netif_poll",
                         "should not be null since first != last!");
      }
    }
    *piVar4 = 0;
    FUN_ram_4814e79e();
    *(char *)((int)piVar1 + 0xf) = *(char *)(param_1 + 0xea) + '\x01';
    iVar3 = FUN_ram_48139372(piVar1,param_1);
    if (iVar3 != 0) {
      FUN_ram_4813ac74(piVar1);
    }
    FUN_ram_4814e762();
    piVar1 = *(int **)(param_1 + 0xfc);
  } while( true );
}


