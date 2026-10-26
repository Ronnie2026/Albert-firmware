/* Firmware entry: 0x4813ac74 */

char FUN_ram_4813ac74(int *param_1)

{
  char cVar1;
  int *piVar2;
  byte bVar3;
  char cVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/pbuf.c",0x2de,"pbuf_free","p != NULL");
  }
  cVar4 = '\0';
  do {
    FUN_ram_4814e762();
    cVar1 = *(char *)((int)param_1 + 0xe);
    if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/pbuf.c",0x2f3,"pbuf_free",
                       "pbuf_free: p->ref > 0");
    }
    *(char *)((int)param_1 + 0xe) = cVar1 + -1;
    FUN_ram_4814e79e();
    if (cVar1 != '\x01') {
      return cVar4;
    }
    piVar2 = (int *)*param_1;
    if ((*(byte *)((int)param_1 + 0xd) & 2) == 0) {
      bVar3 = *(byte *)(param_1 + 3) & 0xf;
      if (bVar3 == 2) {
        FUN_ram_48139604(0x11,param_1);
      }
      else if (bVar3 == 1) {
        FUN_ram_48139604(0x10,param_1);
      }
      else {
        if ((*(byte *)(param_1 + 3) & 0xf) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/pbuf.c",0x311,"pbuf_free",
                           "invalid pbuf type");
        }
        FUN_ram_481393fc(param_1);
      }
    }
    else {
      if ((code *)param_1[4] == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/pbuf.c",0x301,"pbuf_free",
                         "pc->custom_free_function != NULL");
      }
      (*(code *)param_1[4])(param_1);
    }
    cVar4 = cVar4 + '\x01';
    param_1 = piVar2;
  } while (piVar2 != (int *)0x0);
  return cVar4;
}


