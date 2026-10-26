/* Firmware entry: 0x4813b1ae */

uint FUN_ram_4813b1ae(int *param_1,int *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == (int *)0x0) {
    return 0xfffffff0;
  }
  if (((*(ushort *)(param_2 + 2) < param_3) || (param_1 == (int *)0x0)) ||
     ((int)(uint)*(ushort *)(param_1 + 2) < (int)(param_4 + param_3))) {
    return 0xfffffff0;
  }
  uVar5 = 0;
  do {
    uVar1 = *(ushort *)((int)param_1 + 10) - param_4;
    uVar4 = *(ushort *)((int)param_2 + 10) - uVar5;
    if (uVar4 < uVar1) {
      uVar1 = uVar4;
    }
    if (param_3 < uVar1) {
      uVar1 = param_3;
    }
    FUN_ram_4ff45158(param_1[1] + param_4,param_2[1] + uVar5,uVar1);
    uVar4 = (uint)*(ushort *)((int)param_1 + 10);
    param_4 = param_4 + uVar1;
    param_3 = param_3 - uVar1 & 0xffff;
    uVar1 = uVar5 + uVar1;
    if (uVar4 < param_4) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/pbuf.c",0x3f7,"pbuf_copy_partial_pbuf",
                       "offset_to <= p_to->len");
    }
    uVar3 = (uint)*(ushort *)((int)param_2 + 10);
    if (uVar3 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/pbuf.c",0x3f8,"pbuf_copy_partial_pbuf",
                       "offset_from <= p_from->len");
    }
    if (uVar3 == uVar1) {
      param_2 = (int *)*param_2;
      if (param_2 == (int *)0x0) {
        if (param_3 != 0) {
          return 0xfffffff0;
        }
        if (uVar4 == param_4) {
          param_1 = (int *)*param_1;
          if (param_1 == (int *)0x0) {
            return 0;
          }
          uVar4 = (uint)*(ushort *)((int)param_1 + 10);
        }
        if (*(ushort *)(param_1 + 2) != uVar4) {
          return 0;
        }
        iVar2 = *param_1;
        goto LAB_ram_4813b2ca;
      }
      if (uVar4 == param_4) {
        uVar1 = 0;
        goto LAB_ram_4813b29c;
      }
      uVar5 = 0;
      uVar1 = 0;
      if ((short)param_2[2] == *(short *)((int)param_2 + 10)) goto LAB_ram_4813b292;
    }
    else if (uVar4 == param_4) {
LAB_ram_4813b29c:
      param_1 = (int *)*param_1;
      if (param_1 == (int *)0x0) {
        if (param_3 != 0) {
          return 0xfffffff0;
        }
        if ((short)param_2[2] != *(short *)((int)param_2 + 10)) {
          return 0;
        }
        iVar2 = *param_2;
LAB_ram_4813b2ca:
        return -(uint)(iVar2 != 0) & 0xfffffffa;
      }
      if ((*(short *)((int)param_2 + 10) == (short)param_2[2]) && (*param_2 != 0)) {
        return 0xfffffffa;
      }
      uVar4 = (uint)*(ushort *)((int)param_1 + 10);
      param_4 = 0;
      uVar5 = uVar1;
    }
    else {
      uVar5 = uVar1;
      if (*(ushort *)(param_2 + 2) == uVar3) {
LAB_ram_4813b292:
        uVar5 = uVar1;
        if (*param_2 != 0) {
          return 0xfffffffa;
        }
      }
    }
    if ((*(ushort *)(param_1 + 2) == uVar4) && (*param_1 != 0)) {
      return 0xfffffffa;
    }
    if (param_3 == 0) {
      return 0;
    }
  } while( true );
}


