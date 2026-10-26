/* Firmware entry: 0x48007956 */

int FUN_ram_48007956(uint param_1,char *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  undefined *puVar3;
  char *pcVar4;
  code *pcVar5;
  int iVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (2 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("uart_vfs.c",0xe4,"uart_write","fd >= 0 && fd < 3");
  }
  puVar3 = (&PTR_DAT_ram_4ff48158_ram_481e5190)[param_1];
  pcVar5 = *(code **)(puVar3 + 0x1c);
  iVar6 = *(int *)(puVar3 + 0x14);
  FUN_ram_4ff216dc(puVar3 + 0xc);
  if (param_3 != 0) {
    pcVar4 = param_2 + param_3;
    do {
      while (((cVar1 = *param_2, cVar1 == '\n' && (iVar6 != 2)) &&
             ((*pcVar5)(param_1,0xd), iVar6 == 1))) {
        while( true ) {
          pcVar2 = param_2 + 1;
          if (pcVar2 == pcVar4) goto LAB_ram_480079fa;
          if (*pcVar2 != '\n') break;
          (*pcVar5)(param_1,0xd);
          param_2 = pcVar2;
        }
        param_2 = param_2 + 2;
        (*pcVar5)(param_1,*pcVar2);
        if (param_2 == pcVar4) goto LAB_ram_480079fa;
      }
      param_2 = param_2 + 1;
      (*pcVar5)(param_1,cVar1);
    } while (param_2 != pcVar4);
  }
LAB_ram_480079fa:
  FUN_ram_4ff216e6(puVar3 + 0xc);
  return param_3;
}


