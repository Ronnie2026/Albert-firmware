/* Firmware entry: 0x4800b736 */

int FUN_ram_4800b736(uint param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int aiStack_34 [2];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 < 6) {
    if (param_2 == 0) {
      uVar3 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,&DAT_ram_481b4c88,"E (%lu) %s: %s(%d): uart data null\n",uVar3,
                       &DAT_ram_481b4c88,"uart_read_bytes",0x684);
    }
    else {
      piVar5 = (int *)(&DAT_ram_4ff5a014 + param_1 * 4);
      if (*piVar5 == 0) {
        uVar3 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,&DAT_ram_481b4c88,"E (%lu) %s: %s(%d): uart driver error\n",uVar3,
                         &DAT_ram_481b4c88,"uart_read_bytes",0x685);
      }
      else {
        aiStack_34[0] = 0;
        iVar1 = FUN_ram_4ff3b5f0(*(undefined4 *)(*piVar5 + 100),param_4);
        if (iVar1 == 1) {
          if (param_3 == 0) {
            iVar1 = 0;
          }
          else {
            iVar4 = param_1 * 0x38 + 0x4ff48230;
            iVar1 = 0;
            do {
              while( true ) {
                iVar2 = FUN_ram_4ff3672e(*(undefined4 *)(*piVar5 + 0x5c),aiStack_34,param_4,param_3)
                ;
                if (iVar2 != 0) break;
                iVar2 = FUN_ram_48008388(param_1,0);
                if (iVar2 == 0) goto LAB_ram_4800b816;
              }
              FUN_ram_4ff45158(param_2 + iVar1,iVar2,aiStack_34[0]);
              FUN_ram_4ff3ec14(iVar4,0xffffffff);
              *(int *)(*piVar5 + 0x14) = *(int *)(*piVar5 + 0x14) - aiStack_34[0];
              FUN_ram_480084a8(param_1);
              FUN_ram_4ff3ee10(iVar4);
              param_3 = param_3 - aiStack_34[0];
              iVar1 = iVar1 + aiStack_34[0];
              FUN_ram_4ff367a4(*(undefined4 *)(*piVar5 + 0x5c),iVar2);
              FUN_ram_48008388(param_1);
            } while (param_3 != 0);
          }
LAB_ram_4800b816:
          FUN_ram_4ff3afa2(*(undefined4 *)(*(int *)(&DAT_ram_4ff5a014 + param_1 * 4) + 100),0,0,0);
          return iVar1;
        }
      }
    }
  }
  else {
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,&DAT_ram_481b4c88,"E (%lu) %s: %s(%d): uart_num error\n",uVar3,
                     &DAT_ram_481b4c88,"uart_read_bytes",0x683);
  }
  return -1;
}


