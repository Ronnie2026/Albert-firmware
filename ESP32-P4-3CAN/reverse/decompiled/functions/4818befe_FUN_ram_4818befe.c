/* Firmware entry: 0x4818befe */

void FUN_ram_4818befe(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  byte bVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_48142636(1000,&DAT_ram_4818beee,param_1);
  if (*(int **)(param_1 + 0x20) != (int *)0x0) {
    bVar8 = 0;
    piVar6 = *(int **)(param_1 + 0x20);
    do {
      while( true ) {
        piVar2 = (int *)piVar6[1];
        iVar4 = *(int *)(*piVar6 + 0xc) + -1;
        *(int *)(*piVar6 + 0xc) = iVar4;
        if (iVar4 == 0) break;
        bVar8 = bVar8 + 1;
        piVar6 = piVar2;
        if (piVar2 == (int *)0x0) goto LAB_ram_4818bf3c;
      }
      piVar5 = *(int **)(param_1 + 0x20);
      if (piVar5 == (int *)0x0) {
LAB_ram_4818bf64:
        thunk_FUN_ram_4ff209c6();
        thunk_FUN_ram_4ff209c6(piVar6);
      }
      else {
        if (piVar5 != piVar6) {
          do {
            while (piVar3 = (int *)piVar5[1], piVar3 == piVar6) {
              piVar5[1] = piVar6[1];
              piVar6[1] = 0;
              piVar5 = (int *)piVar5[1];
              if (piVar5 == (int *)0x0) goto LAB_ram_4818bf64;
            }
            piVar5 = piVar3;
          } while (piVar3 != (int *)0x0);
          goto LAB_ram_4818bf64;
        }
        *(int **)(param_1 + 0x20) = piVar2;
        thunk_FUN_ram_4ff209c6(*piVar6);
        thunk_FUN_ram_4ff209c6(piVar6);
      }
      piVar6 = piVar2;
    } while (piVar2 != (int *)0x0);
LAB_ram_4818bf3c:
    if (8 < bVar8) {
      piVar6 = *(int **)(param_1 + 0x20);
      if ((piVar6 != (int *)0x0) && ((int *)piVar6[1] != (int *)0x0)) {
        iVar4 = *piVar6;
        piVar2 = piVar6;
        piVar5 = piVar6;
        piVar3 = (int *)piVar6[1];
        piVar7 = piVar6;
        do {
          if (*(uint *)(*piVar3 + 0xc) < *(uint *)(iVar4 + 0xc)) {
            piVar2 = piVar3;
            iVar4 = *piVar3;
            piVar7 = piVar5;
          }
          piVar1 = piVar3 + 1;
          piVar5 = piVar3;
          piVar3 = (int *)*piVar1;
        } while ((int *)*piVar1 != (int *)0x0);
        if (piVar6 == piVar2) {
          *(int *)(param_1 + 0x20) = piVar2[1];
        }
        else {
          piVar7[1] = piVar2[1];
        }
        thunk_FUN_ram_4ff209c6();
        thunk_FUN_ram_4ff209c6(piVar2);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("dhcpserver.c",0x60e,"kill_oldest_dhcps_pool",
                       "pre != NULL && pre->pnext != NULL");
    }
  }
  return;
}


