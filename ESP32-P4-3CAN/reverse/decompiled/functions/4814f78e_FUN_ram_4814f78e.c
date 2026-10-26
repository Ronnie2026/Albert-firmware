/* Firmware entry: 0x4814f78e */

void FUN_ram_4814f78e(int param_1,int param_2,int param_3,int *param_4,undefined2 param_5)

{
  byte bVar1;
  ushort uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/api_msg.c",0xe6,"recv_udp",
                     "recv_udp must have a pcb argument");
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/api_msg.c",0xe7,"recv_udp",
                     "recv_udp must have an argument");
  }
  if (*(int *)(param_1 + 8) != param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/api_msg.c",0xef,"recv_udp",
                     "recv_udp: recv for wrong pcb!");
  }
  FUN_ram_4814e762();
  iVar6 = *(int *)(param_1 + 0x2c);
  FUN_ram_4814e79e();
  if (*(int *)(param_1 + 0x10) != 0) {
    bVar1 = *(byte *)(param_1 + 0x30);
    bVar7 = bVar1 & 8;
    if (((((bVar1 & 8) == 0) &&
         ((int)((uint)*(ushort *)(param_3 + 8) + iVar6) <= *(int *)(param_1 + 0x28))) &&
        (((bVar1 & 0x20) == 0 || (DAT_ram_4ff6cdc0 != 0)))) &&
       (piVar3 = (int *)FUN_ram_4813956e(6), piVar3 != (int *)0x0)) {
      *piVar3 = param_3;
      piVar3[1] = param_3;
      iVar6 = param_4[5];
      *(char *)(piVar3 + 7) = (char)iVar6;
      if ((char)iVar6 == '\x06') {
        iVar6 = param_4[1];
        iVar4 = param_4[2];
        iVar5 = param_4[3];
        bVar7 = *(byte *)(param_4 + 4);
        piVar3[2] = *param_4;
        piVar3[3] = iVar6;
        piVar3[4] = iVar4;
        piVar3[5] = iVar5;
      }
      else {
        piVar3[2] = *param_4;
        piVar3[5] = 0;
        piVar3[4] = 0;
        piVar3[3] = 0;
      }
      *(byte *)(piVar3 + 6) = bVar7;
      *(undefined2 *)(piVar3 + 8) = param_5;
      uVar2 = *(ushort *)(param_3 + 8);
      iVar6 = FUN_ram_4814e53a(param_1 + 0x10,piVar3);
      if (iVar6 != 0) {
        FUN_ram_481517f0(piVar3);
        return;
      }
      FUN_ram_4814e762();
      *(uint *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + (uint)uVar2;
      FUN_ram_4814e79e();
      if (*(code **)(param_1 + 0x38) == (code *)0x0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x4814f85a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x38))(param_1,0,(uint)uVar2);
      return;
    }
  }
  FUN_ram_4813ac74(param_3);
  return;
}


